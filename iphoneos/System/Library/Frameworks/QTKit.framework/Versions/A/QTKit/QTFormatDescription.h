/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:37 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <QTKit/QTKit-Structs.h>
@class QTFormatDescriptionInternal;

@interface QTFormatDescription : NSObject {

	QTFormatDescriptionInternal* _internal;
	long long _reserved1;
	long long _reserved2;
	long long _reserved3;

}
+(id)formatDescriptionWithFigFormatDescription:(opaqueCMFormatDescriptionRef)arg1 ;
-(id)mediaType;
-(opaqueCMFormatDescriptionRef)figFormatDescription;
-(id)initWithFigFormatDescription:(opaqueCMFormatDescriptionRef)arg1 ;
-(CGSize)_scaledVideoSizeUsingCleanAperture:(char)arg1 ;
-(char)isEqualToFormatDescription:(id)arg1 ;
-(id)initEmptyFormatDescriptionWithMediaType:(id)arg1 ;
-(unsigned)formatType;
-(id)localizedFormatSummary;
-(id)quickTimeSampleDescription;
-(id)formatDescriptionAttributes;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)attributeForKey:(id)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
@end

