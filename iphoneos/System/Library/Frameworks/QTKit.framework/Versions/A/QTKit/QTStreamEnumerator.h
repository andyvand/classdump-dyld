/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:37 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class QTTrack;

@interface QTStreamEnumerator : NSEnumerator {

	QTTrack* _track;
	unsigned _index;
	long long _reserved1;
	long long _reserved2;
	long long _reserved3;

}
+(id)streamEnumeratorWithTrack:(id)arg1 ;
-(id)initWithTrack:(id)arg1 ;
-(void)setTrack:(id)arg1 ;
-(void)dealloc;
-(id)nextObject;
@end

