/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:58:06 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Users/joris/Desktop/SysDecrypts/64-Bit/Dock
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Dock/Dock-Structs.h>
@class NSArray, WVExposeCluster, WVAppIconWindow, _CGSSpace;

@interface WVExposeDragObject : NSObject {

	CGPoint _originalPoint;
	float _scale;
	char _resetting;
	char _movesWholeCluster;
	char _hasStickyWindows;
	NSArray* _windows;
	NSArray* _originalExposeWindows;
	WVExposeCluster* _cluster;
	WVAppIconWindow* _appIconWindow;
	CGRect* _originalFrames;
	CGPoint* _deltas;
	int* _windowLevels;
	_CGSSpace* _dragSpace;
	float _baseScale;

}

@property (nonatomic,readonly) char movesWholeCluster;                       //@synthesize movesWholeCluster=_movesWholeCluster - In the implementation block
@property (nonatomic,readonly) char hasStickyWindows;                        //@synthesize hasStickyWindows=_hasStickyWindows - In the implementation block
@property (nonatomic,readonly) WVExposeCluster * cluster;                    //@synthesize cluster=_cluster - In the implementation block
@property (nonatomic,readonly) WVAppIconWindow * appIconWindow; 
@property (nonatomic,retain) NSArray * originalExposeWindows;                //@synthesize originalExposeWindows=_originalExposeWindows - In the implementation block
@property (nonatomic,readonly) float baseScale;                              //@synthesize baseScale=_baseScale - In the implementation block
@property (nonatomic,readonly) float scale;                                  //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) CGPoint startPoint;                           //@synthesize originalPoint=_originalPoint - In the implementation block
@property (nonatomic,readonly) NSArray * windows;                            //@synthesize windows=_windows - In the implementation block
@property (nonatomic,readonly) NSArray * applicationWindows; 
-(WVAppIconWindow *)appIconWindow;
-(NSArray *)applicationWindows;
-(float)baseScale;
-(void)moveToLocation:(CGPoint)arg1 andScale:(float)arg2 ;
-(char)hasStickyWindows;
-(WVExposeCluster *)cluster;
-(id)initWithCluster:(id)arg1 window:(id)arg2 atOrigin:(CGPoint)arg3 ;
-(void)resetWindowLevels;
-(void)setOriginalExposeWindows:(NSArray *)arg1 ;
-(NSArray *)originalExposeWindows;
-(void)moveToLocation:(CGPoint)arg1 andScale:(float)arg2 animated:(char)arg3 ;
-(char)movesWholeCluster;
-(float)scale;
-(void)dealloc;
-(NSArray *)windows;
-(void)reset;
-(CGPoint)startPoint;
@end
