/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:58 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary;

@interface IKSFEffectDescription : NSObject {

	NSDictionary* _description;

}
+(void)addEffectWithDictionary:(id)arg1 ;
+(id)effectDescriptionWithDictionary:(id)arg1 ;
+(id)effectNamed:(id)arg1 ;
+(id)effectNames;
+(void)initialize;
-(id)initFromDictionary:(id)arg1 ;
-(id)parameterAtIndex:(int)arg1 ;
-(id)descriptionDictionary;
-(id)ciName;
-(id)ciIdentifier;
-(char)isInUserDomain;
-(int)numberOfParameters;
-(id)nameForParameter:(int)arg1 ;
-(id)minValueForParameter:(int)arg1 ;
-(id)maxValueForParameter:(int)arg1 ;
-(id)defaultValueForParameter:(int)arg1 ;
-(char)invertValueForParameter:(int)arg1 ;
-(char)isParameterEditable:(int)arg1 ;
-(float)yPosition;
-(void)dealloc;
-(id)description;
-(id)displayName;
-(void)setDescription:(id)arg1 ;
@end

