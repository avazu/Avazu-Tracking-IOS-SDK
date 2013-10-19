####Avazu Tracking iOS SDK Requirements:
######The Avazu Tracking SDK for iOS contains the code necessary to integrate Avazu’s in-app conversion tracking into your applications. This SDK is designed to work across all iOS platforms, with a minimum OS version of 4.3. 

####To integrate, perform the below steps:
######Adding the SDK to your Project
Copy the SDK directory into your project directory at first, then open up the popup menu and click into your project within Xcode, and select “Add File to “Your project name”” to import our SDK. 
 

####Adding Frameworks
######You will need to add some optional/mandatory frameworks into your Xcode project for the SDK . The frameworks required to compile the Avazu Tracking SDK library are given below:
- AVFoundation.framework
- libz.1.2.5.dylib
 
Note: You should mark all framework as optional if your code compiles below iOS version 6.0.

####Adding Additional Build Settings
######Add the -ObjC flag to the Other Linker Flags. To do so, perform the below steps:
- 1	Open your project in Xcode.
- 2	Select Application Target > Build Settings.
- 3	In the Search field, search for 'Other Linker Flags'.
- 4	Add the -ObjC flag.
 
######Modify the Architectures to armv6 and armv7 for fix a problem base on IOS7
- 1	Open your project in Xcode.
- 2	Select Application Target > Build Settings.
- 3	In the Search field, search for 'architectures'.
- 4	Modify items Architectures and Valid Architectures to ‘armv6 armv7’.
 
######Setting the Delegate to send tracking
It is mandatory to run the SDK Tracking before app launch.
Import the header files of SDK files in the application delegate file as shown below:
```objectc
#import "AvazuTracking.h"
```
######Send the Avazu Tracking to server during the first launch of your app after install, in the application delegate file as shown below:
```objectc
-(void)applicationDidFinishLaunching:(UIApplication *)application {    
    // com.avazu.sdk.tracking *********
    [AvazuTracking_TrackerSdk reportAppDownloadGoal];

//Detect device performance
highPerformance = [self isHighPerformanceSystem];

//Setup window with menu view controller
self.menuViewController = [[MenuViewControlleralloc] initWithNibName:@"MenuViewController" bundle:nil];
window.rootViewController = self.menuViewController;
    [window makeKeyAndVisible];//Fade in first view controller
    [menuViewController setRootFadingViewController];
}
```
Note: Once your app is installed and launched, our server is getting called and an install is tracked.
