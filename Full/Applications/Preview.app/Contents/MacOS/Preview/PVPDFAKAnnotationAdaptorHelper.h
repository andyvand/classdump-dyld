/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:47:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Preview.app/Contents/MacOS/Preview
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Preview/Preview-Structs.h>
@interface PVPDFAKAnnotationAdaptorHelper : NSObject
+(void)migrateAKStrokedAnnotationPropertiesTo:(id)arg1 fromPDFAnnotation:(id)arg2 ;
+(void)migrateAKFilledAnnotationPropertiesTo:(id)arg1 fromPDFAnnotation:(id)arg2 ;
+(void)migrateAKRectangularShapeAnnotationPropertiesTo:(id)arg1 fromPDFAnnotation:(id)arg2 ;
+(id)newAKAnnotationFromAnnotationDictionary:(CGPDFDictionaryRef)arg1 ;
+(void)addAKAnnotation:(id)arg1 toAnnotationDictionary:(CFDictionaryRef)arg2 ;
@end

