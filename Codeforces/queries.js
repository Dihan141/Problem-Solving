  {
    _id: ObjectId("6415c2d73f725eae883db9ea"),
    user: [
      'Dihan'
    ],
    content: 'Doing DBMS assignment'
  }
  {
    _id: ObjectId("6415c464a8aafca47d78694e"),
    user: [
      'Dihan'
    ],
    content: 'Good luck for SPL'
  }
  {
    _id: ObjectId("6415b7e7a8aafca47d786931"),
    user: [
      'kazi'
    ],
    content: 'Not feeling good'
  }

  db.users.insertOne({email:"rrdihan@gmail.com", name:"Dihan", password:"asdf"})

  db.users.insertMany([{email:"nazmul@gmail.com", name:"hossain", password:"asdf", phoneNo:1234, address:"hall",hobbies:["gardening, gaming"]},{email:"jawad@gmail.com", name:"kazi", password:"asdf", phoneNo:1234, address:"hall",hobbies:["gardening","watchingTV"]},])

db.users.insertOne({email:"jawad@gmail.com", name:"kazi", password:"asdf", phoneNo:1234, address:"hall",workingStatus:{designation:"student", time: 2}, createdAt: new Date()})

db.users.insertMany([{email:"dihan@gmail.com", name:"Dihan", password:"asdf", phoneNo:1234, address:"boardbazar",workingStatus:{designation:"student", time: 2},followers:[ObjectId("64100956936aa636582a73a9"), ObjectId("64100767936aa636582a73a7"),ObjectId("64100648936aa636582a73a6")], createdAt: new Date()},{email:"jawad@gmail.com", name:"kazi", password:"asdf", phoneNo:1234, address:"hall",workingStatus:{designation:"student", time: 2},followers:["64100648936aa636582a73a6","64100767936aa636582a73a7"], createdAt: new Date()}])

db.posts.insertMany([{userId:ObjectId("64100c79936aa636582a73ab"),content:"Not feeling good",likes:[ObjectId("64100c79936aa636582a73aa"),ObjectId("64100767936aa636582a73a7")], createdAt: new Date()}])

db.posts.insertMany([{userId:ObjectId("64100c79936aa636582a73ab"),content:"Not feeling good",likes:[ObjectId("64100c79936aa636582a73aa"),ObjectId("64100767936aa636582a73a7")],comments:[{uid:ObjectId("64100c79936aa636582a73aa"),comment:"Usss"},{uid:ObjectId("64100767936aa636582a73a7"),comment:"us brother us"}], createdAt: new Date()}])

db.posts.aggregate([
    {
      $sort: {
        createdAt: -1
      }
    },
   {
     $lookup: {
       from: "users",
       localField: "userId",
       foreignField: "_id",
       as: "user"
     }
   },
   {
     $project: {
       _id: 1,
       user: "$user.name",
       content: "$content",
     }
   }
 ])


 db.posts.aggregate([
    {
      $match: {
        createdAt: {
          $gte: new Date(Date.now() - 24*60*60*1000)
        }
      }
    }])
    

    {
        _id: ObjectId("6415c2d73f725eae883db9ea"),
        userId: ObjectId("6415b93fa8aafca47d786934"),
        content: 'Doing DBMS assignment',
        likes: [
          ObjectId("6415b9f1a8aafca47d786936"),
          ObjectId("6415bbcaa8aafca47d78693a")
        ],
        comments: [
          {
            uid: ObjectId("6415b9f1a8aafca47d786936"),
            comment: 'Good job'
          },
          {
            uid: ObjectId("6415bbcaa8aafca47d78693a"),
            comment: 'Let me copy :3'
          }
        ],
        createdAt: 2023-03-18T13:55:35.863Z
      }
      {
        _id: ObjectId("6415c464a8aafca47d78694e"),
        userId: ObjectId("6415b93fa8aafca47d786934"),
        content: 'Good luck for SPL',
        likes: [
          ObjectId("6415b9f1a8aafca47d786936"),
          ObjectId("6415bbcaa8aafca47d78693a")
        ],
        comments: [
          {
            uid: ObjectId("6415b9f1a8aafca47d786936"),
            comment: 'Good luck!'
          },
          {
            uid: ObjectId("6415bbcaa8aafca47d78693a"),
            comment: ":')"
          }
        ],
        createdAt: 2023-03-18T13:55:35.863Z
      }

db.users.aggregate([
  {
    $match: {
      $expr:{
        $gt: [{"$size": "$followers"}, 3]
      }
    }
  }])

{
  _id: ObjectId("6415b93fa8aafca47d786934"),
  email: 'dihan@gmail.com',
  name: 'Dihan',
  password: 'asdf',
  phoneNo: 1234,
  address: 'Boardbazar',
  workingStatus: {
    designation: 'student',
    time: 2
  },
  followers: [
    ObjectId("64100c79936aa636582a73ab"),
    ObjectId("6415b9f1a8aafca47d786936"),
    ObjectId("6415ba23a8aafca47d786938"),
    ObjectId("6415bbcaa8aafca47d78693a")
  ],
  following: [
    ObjectId("6415b9f1a8aafca47d786936")
  ],
  createdAt: 2023-03-18T05:56:08.998Z
}
{
  _id: ObjectId("6415bbcaa8aafca47d78693a"),
  email: 'anan@gmail.com',
  name: 'Anan',
  password: 'asdf',
  phoneNo: 1234,
  address: 'Boardbazar',
  workingStatus: {
    designation: 'student',
    time: 2
  },
  followers: [
    ObjectId("64100c79936aa636582a73ab"),
    ObjectId("6415b9f1a8aafca47d786936"),
    ObjectId("6415ba23a8aafca47d786938"),
    ObjectId("6415b93fa8aafca47d786934")
  ],
  following: [
    ObjectId("6415b93fa8aafca47d786934"),
    ObjectId("6415b9f1a8aafca47d786936"),
    ObjectId("6415ba23a8aafca47d786938"),
    ObjectId("64100c79936aa636582a73ab")
  ],
  createdAt: 2023-03-18T05:56:08.998Z
}

db.users.aggregate([
  {
    $match: {
      $expr:{
        $gt: [{"$size": "$following"}, 3]
      }
    }
  }])

{
  _id: ObjectId("64100c79936aa636582a73ab"),
  email: 'jawad@gmail.com',
  name: 'kazi',
  password: 'asdf',
  phoneNo: 1234,
  address: 'hall',
  workingStatus: {
    designation: 'student',
    time: 2
  },
  followers: [
    ObjectId("6415b9f1a8aafca47d786936"),
    ObjectId("6415ba23a8aafca47d786938")
  ],
  following: [
    ObjectId("6415b93fa8aafca47d786934"),
    ObjectId("6415b9f1a8aafca47d786936"),
    ObjectId("6415ba23a8aafca47d786938"),
    ObjectId("6415bbcaa8aafca47d78693a")
  ],
  createdAt: 2023-03-14T05:56:08.998Z
}
{
  _id: ObjectId("6415bbcaa8aafca47d78693a"),
  email: 'anan@gmail.com',
  name: 'Anan',
  password: 'asdf',
  phoneNo: 1234,
  address: 'Boardbazar',
  workingStatus: {
    designation: 'student',
    time: 2
  },
  followers: [
    ObjectId("64100c79936aa636582a73ab"),
    ObjectId("6415b9f1a8aafca47d786936"),
    ObjectId("6415ba23a8aafca47d786938"),
    ObjectId("6415b93fa8aafca47d786934")
  ],
  following: [
    ObjectId("6415b93fa8aafca47d786934"),
    ObjectId("6415b9f1a8aafca47d786936"),
    ObjectId("6415ba23a8aafca47d786938"),
    ObjectId("64100c79936aa636582a73ab")
  ],
  createdAt: 2023-03-18T05:56:08.998Z
}