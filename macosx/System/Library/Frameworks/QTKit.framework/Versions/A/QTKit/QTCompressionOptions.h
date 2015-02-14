/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:08 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class QTCompressionOptionsInternal;

@interface QTCompressionOptions : NSObject {

	QTCompressionOptionsInternal* _internal;
	long long _reserved;

}
+(id)compressionOptionsWithDescription:(id)arg1 ;
+(id)_compressionOptionsPropertyList;
+(char)_canUseCompressionOptionsWithDescription:(id)arg1 forVisibility:(unsigned long long)arg2 ;
+(id)compressionOptionsIdentifiersForMediaType:(id)arg1 ;
+(id)compressionOptionsWithIdentifier:(id)arg1 ;
-(id)mediaType;
-(id)localizedCompressionOptionsSummary;
-(char)isEqualToCompressionOptions:(id)arg1 ;
-(char)isRecommendedOnCurrentHardware;
-(id)init;
-(void)dealloc;
-(id)localizedDisplayName;
-(void)_setIdentifier:(id)arg1 ;
@end

