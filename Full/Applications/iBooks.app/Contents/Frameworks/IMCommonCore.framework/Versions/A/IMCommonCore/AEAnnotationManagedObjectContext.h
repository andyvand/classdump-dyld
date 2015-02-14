/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:22 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/Frameworks/IMCommonCore.framework/Versions/A/IMCommonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSManagedObjectContext.h>

@class AEAnnotationProvider;

@interface AEAnnotationManagedObjectContext : NSManagedObjectContext {

	AEAnnotationProvider* _annotationProvider;

}

@property (__weak) AEAnnotationProvider * annotationProvider;              //@synthesize annotationProvider=_annotationProvider - In the implementation block
-(AEAnnotationProvider *)annotationProvider;
-(void)setAnnotationProvider:(AEAnnotationProvider *)arg1 ;
-(char)saveAnnotationProvider;
@end

