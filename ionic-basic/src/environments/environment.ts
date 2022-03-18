// This file can be replaced during build by using the `fileReplacements` array.
// `ng build --prod` replaces `environment.ts` with `environment.prod.ts`.
// The list of file replacements can be found in `angular.json`.

import * as firebase from "firebase";

export const environment = {
  production: false,
   firebaseConfig: {
  apiKey: "AIzaSyBkleupQ6D4miE2cYEOmN5HCXdTjropuIY",
  authDomain: "back-front-68d21.firebaseapp.com",
  projectId: "back-front-68d21",
  storageBucket: "back-front-68d21.appspot.com",
  messagingSenderId: "1087992021282",
  appId: "1:1087992021282:web:2413382641c9e2e60ce57b",
  measurementId: "G-1B5ENV6KCX"
  }
};

/*
 * For easier debugging in development mode, you can import the following file
 * to ignore zone related error stack frames such as `zone.run`, `zoneDelegate.invokeTask`.
 *
 * This import should be commented out in production mode because it will have a negative impact
 * on performance if an error is thrown.
 */
// import 'zone.js/dist/zone-error';  // Included with Angular CLI.
