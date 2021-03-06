/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:55:50 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface MediaIOGraphNodeList : NSObject {

	int* _nodes;
	unsigned long long _count;

}
+(id)nodeListWithNodes:(int*)arg1 count:(unsigned long long)arg2 ;
-(int)nodeAtIndex:(unsigned long long)arg1 ;
-(id)initWithNodes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)nodeListByAppendingNodes:(int*)arg1 count:(unsigned long long)arg2 ;
-(void)finalize;
-(void)dealloc;
-(unsigned long long)count;
@end

