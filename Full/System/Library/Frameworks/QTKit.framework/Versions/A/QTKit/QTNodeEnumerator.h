/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:50 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class QTMovie;

@interface QTNodeEnumerator : NSEnumerator {

	QTMovie* _movie;
	unsigned _index;
	long long _reserved1;
	long long _reserved2;
	long long _reserved3;

}
+(id)nodeEnumeratorWithMovie:(id)arg1 ;
-(void)dealloc;
-(id)nextObject;
-(id)initWithMovie:(id)arg1 ;
-(void)setMovie:(id)arg1 ;
@end

