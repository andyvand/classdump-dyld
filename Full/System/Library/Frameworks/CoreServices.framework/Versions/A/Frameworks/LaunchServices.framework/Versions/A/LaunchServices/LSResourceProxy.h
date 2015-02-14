/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:16 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/LaunchServices.framework/Versions/A/LaunchServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <LaunchServices/LaunchServices-Structs.h>
@class NSString, NSURL, NSDictionary, NSArray, LSApplicationProxy;

@interface LSResourceProxy : NSObject {

	NSString* _localizedName;
	NSString* _boundApplicationIdentifier;
	NSURL* _boundContainerURL;
	NSURL* _boundDataContainerURL;
	NSURL* _boundResourcesDirURL;
	NSDictionary* _boundIconsDictionary;
	NSString* _boundIconCacheKey;
	NSArray* _boundIconFileNames;
	LSApplicationProxy* _typeOwner;
	char _boundIconIsPrerendered;
	char _boundIconIsBadge;

}

@property (nonatomic,readonly) NSString * localizedName;                    //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,readonly) char boundIconIsBadge; 
@property (nonatomic,readonly) NSDictionary * iconsDictionary; 
-(CGImageRef)copyIconImageWithSize:(CGSize)arg1 scale:(unsigned)arg2 ;
-(void)setBoundApplicationIdentifier:(id)arg1 ;
-(void)setBoundContainerURL:(id)arg1 ;
-(void)setBoundDataContainerURL:(id)arg1 ;
-(void)setBoundResourcesDirectoryURL:(id)arg1 ;
-(void)setBoundIconsDictionary:(id)arg1 ;
-(void)setBoundIconCacheKey:(id)arg1 ;
-(void)setBoundIconFileNames:(id)arg1 ;
-(void)setTypeOwner:(id)arg1 ;
-(void)setBoundIconIsPrerendered:(char)arg1 ;
-(void)setBoundIconIsBadge:(char)arg1 ;
-(id)_initWithLocalizedName:(id)arg1 boundApplicationIdentifier:(id)arg2 boundContainerURL:(id)arg3 dataContainerURL:(id)arg4 boundResourcesDirectoryURL:(id)arg5 boundIconsDictionary:(id)arg6 boundIconCacheKey:(id)arg7 boundIconFileNames:(id)arg8 typeOwner:(id)arg9 boundIconIsPrerendered:(char)arg10 boundIconIsBadge:(char)arg11 ;
-(id)boundIconsDictionary;
-(id)_initWithLocalizedName:(id)arg1 ;
-(id)boundApplicationIdentifier;
-(id)boundContainerURL;
-(id)boundDataContainerURL;
-(id)boundResourcesDirectoryURL;
-(NSDictionary *)iconsDictionary;
-(id)boundIconCacheKey;
-(id)boundIconFileNames;
-(id)typeOwner;
-(char)boundIconIsPrerendered;
-(char)boundIconIsBadge;
-(id)iconDataForStyle:(id)arg1 width:(long long)arg2 height:(long long)arg3 options:(unsigned long long)arg4 ;
-(id)iconDataForVariant:(int)arg1 ;
-(id)iconStyleDomain;
-(void)setLocalizedName:(NSString *)arg1 ;
-(void)dealloc;
-(NSString *)localizedName;
@end

