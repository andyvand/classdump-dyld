/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:23:53 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Calendar.app/Contents/MacOS/Calendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarUI/CalUILayerBackedView.h>
#import <Calendar/NSAnimationDelegate.h>

@class CalUICalendarContentView, CalUICalendarViewsController, NSView, NSString;

@interface CalUICalendarContainerView : CalUILayerBackedView <NSAnimationDelegate> {

	CalUICalendarContentView* _contentView;
	CalUICalendarViewsController* _viewsController;
	NSView* _leftEdgeBorder;
	NSView* _rightEdgeBorder;
	NSView* _rightEdgeVisualEffectView;

}

@property (nonatomic,retain) CalUICalendarContentView * contentView;              //@synthesize contentView=_contentView - In the implementation block
@property (__weak) CalUICalendarViewsController * viewsController;                //@synthesize viewsController=_viewsController - In the implementation block
@property (retain) NSView * leftEdgeBorder;                                       //@synthesize leftEdgeBorder=_leftEdgeBorder - In the implementation block
@property (retain) NSView * rightEdgeBorder;                                      //@synthesize rightEdgeBorder=_rightEdgeBorder - In the implementation block
@property (retain) NSView * rightEdgeVisualEffectView;                            //@synthesize rightEdgeVisualEffectView=_rightEdgeVisualEffectView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setViewsController:(CalUICalendarViewsController *)arg1 ;
-(CalUICalendarViewsController *)viewsController;
-(void)addContentView:(id)arg1 ;
-(void)setSearchDividerHidden:(char)arg1 ;
-(id)_newEdgeBorderView;
-(id)_newEdgeVisualEffectsView;
-(NSView *)rightEdgeVisualEffectView;
-(NSView *)rightEdgeBorder;
-(NSView *)leftEdgeBorder;
-(void)setLeftEdgeBorder:(NSView *)arg1 ;
-(void)setRightEdgeBorder:(NSView *)arg1 ;
-(void)setRightEdgeVisualEffectView:(NSView *)arg1 ;
-(id)localizedDescriptionForViewType:(id)arg1 ;
-(id)bestFormattedDateStringForDate:(id)arg1 ;
-(id)init;
-(char)accessibilityIsIgnored;
-(id)accessibilityAttributeNames;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(char)accessibilityIsAttributeSettable:(id)arg1 ;
-(CalUICalendarContentView *)contentView;
-(void)setContentView:(CalUICalendarContentView *)arg1 ;
-(char)isOpaque;
@end

