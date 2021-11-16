That's a college project.

The idea of ​​this is make a system which catch the patients date who are infected by covid.

It has a login system, and it uses the libcurl to request an API, which catch the right address thru CEP and write in a file .txt, as well as others date.

=D It is in progress, yet.



// gcc code/main.c -o compiled/main.run -lcurl

//As funções possuem uma ordem de precedência. Uma chama outra, que chama outra, que chama outra e que sempre irá cair na main. A função deve ser declarada na última em que ela é chamada e não na primeira,
pois dessa forma na última função chamada, ela já vai estar incluída nas outras. Caso você declare ela na segunda por exemplo, ela só vai funcionar na segunda e primeira. Nunca na terceira.
