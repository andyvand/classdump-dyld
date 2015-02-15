/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:36 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSNavNode, NSNavProgressWindowController;

@interface NSNavNodeTask : NSObject {

	NSNavNode* _node;
	NSNavProgressWindowController* _progressWindowController;

}

@property (retain) NSNavNode * node;                                                               //@synthesize node=_node - In the implementation block
@property (retain,readonly) NSNavProgressWindowController * progressWindowController; 
+(void)removeAllTasksForNode:(id)arg1 ;
+(id)allTasksForNode:(id)arg1 ;
+(void)addTask:(id)arg1 forNode:(id)arg2 ;
+(void)removeTask:(id)arg1 forNode:(id)arg2 ;
-(void)dealloc;
-(void)cancel;
-(char)worksWhenModal;
-(NSNavNode *)node;
-(id)initWithNode:(id)arg1 ;
-(void)setNode:(NSNavNode *)arg1 ;
-(NSNavProgressWindowController *)progressWindowController;
-(id)_imageForOSType:(unsigned)arg1 ;
@end

