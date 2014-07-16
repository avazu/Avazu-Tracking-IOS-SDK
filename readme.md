####Avazu Tracking iOS SDK Requirements:
######The Avazu Tracking SDK for iOS contains the code necessary to integrate Avazu’s in-app conversion tracking into your applications. This SDK is designed to work across all iOS platforms, with a minimum OS version of 5.0.

####To integrate, perform the below steps:
######Adding the SDK to your Project
Copy the SDK directory(./AvazuTrackingSdk) into your project directory at first, then open up the popup menu and click into your project within Xcode, and select “Add File to “Your project name”” to import our SDK.
 

####Adding Frameworks
######You will need to add some optional/mandatory frameworks into your Xcode project for the SDK . The frameworks required to compile the Avazu Tracking SDK library are given below:
- AVFoundation.framework
- AdSupport.framework
- libz.1.2.5.dylib
- MapKit.framework
 
Note: You should mark all framework as optional if your code compiles below iOS version 6.0.
 
######Setting the Delegate to send tracking
It is mandatory to run the SDK Tracking before app launch.
Import the header files of SDK files in the application delegate file as shown below:
```objectc
#import "AvazuTracking.h"
```
######Send the Avazu Tracking to server during the first launch of your app after install, in the application delegate file as shown below:
```objectc
- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions{    self.window = [[UIWindow alloc] initWithFrame:[[UIScreen mainScreen] bounds]];    // Override point for customization after application launch.    self.window.backgroundColor = [UIColor whiteColor];    [self.window makeKeyAndVisible];        // Avazu Tracking Sdk    [AvazuTracking reportAppDownloadGoalWithSales:nil];}
```
Note: Once your app is installed and launched, our server is getting called and an install is tracked.
