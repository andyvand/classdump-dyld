/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSCopying.h>

@class NSAttributedString;

@interface NSStringMeasurementCacheKey : NSObject <NSCopying> {

	NSAttributedString* _string;
	CGSize _size;
	unsigned long long _options;

}
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAttributedString:(id)arg1 size:(CGSize)arg2 options:(unsigned long long)arg3 ;
@end

