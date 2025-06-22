import express from "express";
import dotenv, { parse } from "dotenv";
import cors from "cors";
import db from "./utils/db.js";
import cookieParser from "cookie-parser";


//import all routes
import userRoutes from "./routes/user.routes.js"




dotenv.config(); 

const app = express()

app.use(cors(
  {
    origin : "https://localhost:3000", 
    methods:['GET','POST','DELETE','OPTIONS'],
    credentials: true,
    allowedHeaders:['Content-Type','Authorization'] 
  }
)
);

app.use(express.json());

app.use(express.urlencoded({extended:true}));

const port = process.env.PORT || 4000;
app.get(cookieParser());//we can access cookie in req or response 
app.get('/', (req, res) => {
  res.send('Hello World!')
}) 

// app.get('/sid', (req, res) => {
//     res.send('Hello sid!')
//   })

// console.log(process.env.PORT);

db();

//user routes
app.use("/api/v1/users/" , userRoutes)

app.listen(port, () => {
  console.log(`Example app listening on port ${port}`)
})

