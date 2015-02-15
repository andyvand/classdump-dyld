/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <FinderKit/FinderKit-Structs.h>
@interface FI_TInlineProgressController : NSObject {

	unordered_map<TFENode, TProgressState, std::__1::hash<TFENode>, std::__1::equal_to<TFENode>, std::__1::allocator<std::__1::pair<const TFENode, TProgressState> > >* _nodesProgress;
	TMutex _progressLock;

}
+(id)instance;
-(BOOL)updateNodeProgressState:(const TFENode*)arg1 ;
-(id)copyProgressImageForNode:(const TFENode*)arg1 ;
-(TString*)progressStateForNode:(const TFENode*)arg1 ;
-(BOOL)nodeProgress:(const TFENode*)arg1 state:(unsigned*)arg2 amount:(unsigned*)arg3 cancellable:(BOOL*)arg4 ;
-(id)nodeProgressState:(const TFENode*)arg1 ;
-(TIconRef*)nodeProgressIcon:(const TFENode*)arg1 ;
@end

