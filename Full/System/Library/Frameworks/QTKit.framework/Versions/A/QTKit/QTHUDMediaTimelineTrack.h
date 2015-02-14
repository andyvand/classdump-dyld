/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:51 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class QTHUDMediaTimelineView, QTHUDMediaTimelineTrackPreview;

@interface QTHUDMediaTimelineTrack : NSObject {

	id _identifier;
	QTHUDMediaTimelineView* _timelineView;
	id _representedObject;
	QTHUDMediaTimelineTrackPreview* _preview;

}

@property (nonatomic,readonly) id identifier;                                       //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) QTHUDMediaTimelineView * timelineView;                 //@synthesize timelineView=_timelineView - In the implementation block
@property (nonatomic,retain) id representedObject;                                  //@synthesize representedObject=_representedObject - In the implementation block
@property (nonatomic,retain) QTHUDMediaTimelineTrackPreview * preview; 
-(QTHUDMediaTimelineView *)timelineView;
-(void)setTimelineView:(QTHUDMediaTimelineView *)arg1 ;
-(QTHUDMediaTimelineTrackPreview *)preview;
-(void)setPreview:(QTHUDMediaTimelineTrackPreview *)arg1 ;
-(id)init;
-(void)dealloc;
-(id)identifier;
-(id)representedObject;
-(void)setRepresentedObject:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
@end

