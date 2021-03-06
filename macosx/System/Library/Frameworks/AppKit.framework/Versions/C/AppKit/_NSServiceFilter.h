/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:44 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class _NSServiceEntry, NSArray;

@interface _NSServiceFilter : NSObject {

	unsigned long long desiredFilterMask;
	unsigned wordLimit;
	unsigned characterLimit;
	_NSServiceEntry* entry;
	id bundleIdentifier;
	id fileType;
	id textScript;
	id textLanguage;
	NSArray* linkSchemes;
	NSArray* nonstandardContentTypes;
	struct {
		unsigned contentTypeWebURL : 1;
		unsigned contentTypeAnyURL : 1;
		unsigned contentTypeDate : 1;
		unsigned contentTypeAddress : 1;
		unsigned contentTypeFilePath : 1;
		unsigned contentTypeRadar : 1;
		unsigned contentTypeEmail : 1;
		unsigned requiresCJKInputSource : 1;
		unsigned requiresAnyCharacterBeHalfWidth : 1;
		unsigned requiresAnyCharacterBeFullWidth : 1;
		unsigned requiresNonIdentityTraditionalToSimpleConversion : 1;
		unsigned requiresNonIdentitySimpleToTraditionalConversion : 1;
		unsigned hasMenuLocation : 1;
		unsigned menuLocationServices : 1;
		unsigned menuLocationContext : 1;
		unsigned disqualified : 1;
		unsigned sense : 1;
		unsigned reserved : 15;
	}  flags;

}
+(char)isCJKInputSourceEnabled;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)_descriptionInnards;
-(char)hasDataDetectorTypes;
-(id)descriptionForTracking;
-(unsigned long long)desiredFilterMask;
-(char)isRequiredContext;
-(id)dataDetectorTypes;
-(unsigned long long)serviceCategory;
@end

