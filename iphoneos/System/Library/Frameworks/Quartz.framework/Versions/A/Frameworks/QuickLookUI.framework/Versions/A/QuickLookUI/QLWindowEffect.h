/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:40 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSWindow, NSMapTable;

@interface QLWindowEffect : NSObject {

	unsigned _effectID;
	NSWindow* _window;
	/*^block*/id _preparationBlock;
	/*^block*/id _completionBlock;
	NSMapTable* _childWindows;

}

@property (copy) id preparationBlock; 
@property (copy) id completionBlock; 
@property (assign) unsigned effectID;              //@synthesize effectID=_effectID - In the implementation block
@property (retain) NSWindow * window;              //@synthesize window=_window - In the implementation block
-(void)abort;
-(void)_restoreChildWindows;
-(void)windowDidUpdate;
-(void)setPreparationBlock:(id)arg1 ;
-(id)preparationBlock;
-(unsigned)effectID;
-(void)setEffectID:(unsigned)arg1 ;
-(void)done;
-(void)finalize;
-(void)dealloc;
-(NSWindow *)window;
-(id)prepare;
-(void)invoke;
-(id)initWithWindow:(id)arg1 ;
-(void)setWindow:(NSWindow *)arg1 ;
-(void)setCompletionBlock:(id)arg1 ;
-(id)completionBlock;
@end

