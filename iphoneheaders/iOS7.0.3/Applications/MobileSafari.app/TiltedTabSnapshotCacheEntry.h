/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:35:42 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class UIImage;

@interface TiltedTabSnapshotCacheEntry : NSObject {

	UIImage* _snapshot;
	int _state;

}

@property (nonatomic,retain) UIImage * snapshot;              //@synthesize snapshot=_snapshot - In the implementation block
@property (assign,nonatomic) int state;                       //@synthesize state=_state - In the implementation block
-(void)setSnapshot:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(int)state;
-(void)setState:(int)arg1 ;
-(id)snapshot;
@end
