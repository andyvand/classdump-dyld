/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:34 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzFilters.framework/Versions/A/QuartzFilters
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <QuartzFilters/QuartzFilters-Structs.h>
@interface QuartzFilter : NSObject {

	id _privateData;

}
+(id)quartzFilterWithURL:(id)arg1 ;
+(id)converterProperties:(id)arg1 allObjects:(char)arg2 images:(char)arg3 imageBPC:(char)arg4 imageRenderingIntent:(unsigned)arg5 ;
+(id)quartzFilterWithProperties:(id)arg1 ;
+(id)quartzFilterWithOutputIntents:(id)arg1 ;
+(id)hostMatchingFilter:(id)arg1 imageBPC:(char)arg2 imageRenderingIntent:(unsigned)arg3 ;
+(id)imageConverter:(id)arg1 bpc:(char)arg2 renderingIntent:(unsigned)arg3 ;
-(id)qfilter;
-(void)initWithInternalFilter:(id)arg1 ;
-(id)contextDictionary;
-(void)removeFromContext:(CGContextRef)arg1 ;
-(void)release;
-(void)dealloc;
-(id)description;
-(id)url;
-(id)localizedName;
-(void)setURL:(id)arg1 ;
-(id)properties;
-(void)setOwner:(id)arg1 ;
-(char)applyToContext:(CGContextRef)arg1 ;
@end

