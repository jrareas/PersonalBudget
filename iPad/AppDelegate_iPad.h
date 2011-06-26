//
//  AppDelegate_iPad.h
//  PersonalBudget
//
//  Created by Jose Areas on 6/24/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AppDelegate_iPad : NSObject <UIApplicationDelegate> {
    UIWindow *window;
	UISplitViewController *splitView;
	UISwitch *switchbutton;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;




@end

