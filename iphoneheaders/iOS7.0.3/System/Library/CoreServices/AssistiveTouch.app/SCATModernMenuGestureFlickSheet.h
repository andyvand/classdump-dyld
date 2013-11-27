/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:38:33 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <assistivetouchd/SCATModernMenuGesturesSheetBase.h>

@protocol SCATMenuFlickItemsViewDelegate;
@class ;

@interface SCATModernMenuGestureFlickSheet : SCATModernMenuGesturesSheetBase {

	<SCATMenuFlickItemsViewDelegate>* _delegate;

}

@property (assign,nonatomic) <SCATMenuFlickItemsViewDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)menuItemWasActivated:(id)arg1 ;
-(id)makeMenuItemsIfNeeded;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
@end
