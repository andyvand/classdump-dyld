/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:59 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NSObjectNSCopying;
#import <AVFoundation/AVFoundation-Structs.h>
@class NSString, NSLocale, NSDictionary;

@interface AVMetadataItemInternal : NSObject {

	OpaqueFigMetadataReaderRef reader;
	long long itemIndex;
	NSString* identifier;
	NSString* keySpace;
	id<NSObject><NSCopying> key;
	NSString* commonKey;
	NSLocale* locale;
	NSString* extendedLanguageTag;
	id<NSObject><NSCopying> value;
	SCD_Struct_CM5 time;
	SCD_Struct_CM5 duration;
	NSString* dataType;
	NSDictionary* extras;

}
@end

