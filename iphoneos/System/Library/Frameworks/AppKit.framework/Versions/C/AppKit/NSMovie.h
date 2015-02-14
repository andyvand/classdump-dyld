/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:14 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSCoding.h>

@class NSURL;

@interface NSMovie : NSObject <NSCoding> {

	void* _movie;
	NSURL* _url;
	SCD_Struct_NS19 _movieFlags;
	long long _reserved1;
	long long _reserved2;

}
+(void)initialize;
+(void)_loadQTKit;
+(Class)_QTMovieClass;
-(void)finalize;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithMovie:(id)arg1 ;
-(id)QTMovie;
@end

