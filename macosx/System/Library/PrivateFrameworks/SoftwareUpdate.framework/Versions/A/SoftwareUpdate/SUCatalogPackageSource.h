/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdate.framework/Versions/A/SoftwareUpdate
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SoftwareUpdate/SUPackageSource.h>

@class NSMutableDictionary;

@interface SUCatalogPackageSource : SUPackageSource {

	NSMutableDictionary* _packageReferencesByProduct;
	NSMutableDictionary* _digestByPackageURLPath;

}
-(id)initWithCatalog:(id)arg1 ;
-(id)_packageDictionaryForProductKey:(id)arg1 matchingPackageURL:(id)arg2 ;
-(id)descriptionForProduct:(id)arg1 ;
-(char)registerProduct:(id)arg1 ;
-(id)digestForPackageAtURLPath:(id)arg1 ;
-(id)allPackageReferences;
-(id)packageReferencesMatchingIdentifier:(id)arg1 version:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

