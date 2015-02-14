/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:54 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Suggestions.framework/Versions/A/Suggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSWindow;

@interface SGTWindowEffect : NSObject {

	unsigned _effectID;
	NSWindow* _window;
	/*^block*/id _preparationBlock;
	/*^block*/id _completionBlock;

}

@property (copy) id preparationBlock;                //@synthesize preparationBlock=_preparationBlock - In the implementation block
@property (copy) id completionBlock;                 //@synthesize completionBlock=_completionBlock - In the implementation block
@property (assign) unsigned effectID;                //@synthesize effectID=_effectID - In the implementation block
@property (readonly) NSWindow * window;              //@synthesize window=_window - In the implementation block
-(void)abort;
-(void)setPreparationBlock:(id)arg1 ;
-(id)preparationBlock;
-(unsigned)effectID;
-(void)setEffectID:(unsigned)arg1 ;
-(void)done;
-(void)dealloc;
-(NSWindow *)window;
-(id)prepare;
-(void)invoke;
-(id)initWithWindow:(id)arg1 ;
-(void)setCompletionBlock:(id)arg1 ;
-(id)completionBlock;
@end

