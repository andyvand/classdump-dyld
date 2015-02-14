/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Calendar.app/Contents/MacOS/Calendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Calendar/Calendar-Structs.h>
#import <CalendarUI/CalUILayerBackedView.h>

@class CalUIDayCanvasController;

@interface CalUICanvasFrameView : CalUILayerBackedView {

	CalUIDayCanvasController* _canvasController;

}

@property (__weak) CalUIDayCanvasController * canvasController;              //@synthesize canvasController=_canvasController - In the implementation block
-(void)setCanvasController:(CalUIDayCanvasController *)arg1 ;
-(CalUIDayCanvasController *)canvasController;
-(id)initWithCanvasController:(id)arg1 ;
-(char)accessibilityIsIgnored;
-(id)accessibilityAttributeNames;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(void)resizeSubviewsWithOldSize:(CGSize)arg1 ;
@end

