/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:54 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/Versions/A/DataDetectorsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface DDStatsBuilder : NSObject {

	NSMutableDictionary* _knownParserStates;

}
-(void)handleState:(long long)arg1 withStack:(void*)arg2 ;
-(id)parserStateWithStateIndex:(long long)arg1 ;
-(id)rootStates;
-(id)allStates;
-(id)init;
-(void)dealloc;
-(void)flush;
@end
