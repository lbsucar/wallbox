/* Copyright (C) Luis Beltran Sucar Segarra - All Rights Reserved
 * Unauthorized copying of this file, via any medium is strictly prohibited
 * Proprietary and confidential
 * Written by Luis Sucar <luis.sucar@gmail.com>, March 2022
 */
 
Wallbox Test
============

In orther to make easy the compilin the project can be build nad test in a docker image.
So is recommended to install docker on the client machine.
https://docs.docker.com/get-docker/
```
docker build .
````
In case something fails on the compiling or the tests the image will not be generated and the errors will appear.
Once the image is generated you can find the exec ( ./WallboxTechnicalTest_run )on the build folder:
````
/usr/src/build/src
````
Also you can launch the test by hand ( ./WallboxTechnicalTest_tst ), they are loacated on:
````
/usr/src/build/test
````
The test are using the GoogleTest:
https://github.com/google/googletest

Theorical tests are in the docs folder.
