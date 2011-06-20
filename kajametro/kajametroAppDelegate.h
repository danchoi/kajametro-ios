//
//  kajametroAppDelegate.h
//  kajametro
//
//  Created by Daniel Choi on 6/20/11.
//  Copyright 2011 Software by Daniel Choi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface kajametroAppDelegate : NSObject <UIApplicationDelegate, UITabBarControllerDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet UITabBarController *tabBarController;

@end
