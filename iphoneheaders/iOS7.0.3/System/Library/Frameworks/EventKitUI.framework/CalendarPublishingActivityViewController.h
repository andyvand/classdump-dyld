/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:28:03 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIActivityViewController.h>

@protocol CalendarPublishingActivityDelegate;
@class ;

@interface CalendarPublishingActivityViewController : UIActivityViewController {

	<CalendarPublishingActivityDelegate>* _activityDelegate;

}

@property (__weak) <CalendarPublishingActivityDelegate> * activityDelegate;              //@synthesize activityDelegate=_activityDelegate - In the implementation block
-(id)activityDelegate;
-(void)setActivityDelegate:(id)arg1 ;
-(BOOL)_shouldShowSystemActivity:(id)arg1 ;
-(void)_prepareActivity:(id)arg1 ;
-(void).cxx_destruct;
@end
