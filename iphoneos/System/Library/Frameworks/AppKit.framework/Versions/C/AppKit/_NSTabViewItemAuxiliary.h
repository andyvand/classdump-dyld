/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:14 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class NSString, NSViewController;

@interface _NSTabViewItemAuxiliary : NSObject {

	CGSize cachedMinimumLabelSize;
	NSString* _explicitToolTip;
	NSViewController* _viewController;

}

@property (copy) NSString * explicitToolTip;                       //@synthesize explicitToolTip=_explicitToolTip - In the implementation block
@property (retain) NSViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
-(void)dealloc;
-(void)setViewController:(NSViewController *)arg1 ;
-(NSViewController *)viewController;
-(NSString *)explicitToolTip;
-(void)setExplicitToolTip:(NSString *)arg1 ;
@end

