/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:17 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class NSEnumerator, QTMedia;

@interface QTDataReferenceEnumerator : NSEnumerator {

	NSEnumerator* _enumerator;
	QTMedia* _media;
	unsigned index;
	long long _reserved1;
	long long _reserved2;
	long long _reserved3;

}
+(id)dataReferenceEnumeratorWithQTMovie:(id)arg1 ;
+(id)dataReferenceEnumeratorWithQTMedia:(id)arg1 ;
-(void)setMedia:(id)arg1 ;
-(id)initWithQTMovie:(id)arg1 ;
-(id)initWithQTMedia:(id)arg1 ;
-(void)setEnumerator:(id)arg1 ;
-(void)dealloc;
-(id)nextObject;
@end

