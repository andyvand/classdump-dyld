/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:28:59 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>

@class SKStarRatingAlertView;

@interface SKStarRatingAlertViewDelegate : NSObject <UIAlertViewDelegate> {

	SKStarRatingAlertView* _alertView;
	/*^block*/ id _completionBlock;

}
-(void)showAlertView:(id)arg1 withCompletionBlock:(/*^block*/ id)arg2 ;
-(void)dealloc;
-(void)alertViewCancel:(id)arg1 ;
-(void)alertView:(id)arg1 willDismissWithButtonIndex:(int)arg2 ;
@end
