const express = require('express');
var crypt = require('bcryptjs');
const app = express();
const port = 3000;

app.use(express.urlencoded({extended: true}));
app.use(express.json());
app.use(express.raw());

require('dotenv').config();
require('./routes/user/user')(app, crypt);
require('./routes/todos/todos')(app, crypt);
require('./routes/auth/auth')(app, crypt);

app.get('/', (req, res) => {
    res.setHeader('Content-Type', 'text/plain')
    res.write('Welcome to the main menu ^^s:\n')
})

app.listen(port, () => {
    console.log(`starting on port:${port}`)
})