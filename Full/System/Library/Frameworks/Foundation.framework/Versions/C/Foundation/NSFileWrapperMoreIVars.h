/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:05 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSURL, NSHashTable, NSError, NSDictionary;

@interface NSFileWrapperMoreIVars : NSObject {

	NSString* fileType;
	NSURL* contentsURL;
	char contentsMustBeReadWithoutMapping;
	char attributesMustBeWrittenSoNoHardLinking;
	NSHashTable* parents;
	NSError* contentsLazyReadingError;
	NSDictionary* cachedDirectoryChildrenAsDictionary;

}
@end

