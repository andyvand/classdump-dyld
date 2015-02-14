/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:40 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdate.framework/Versions/A/SoftwareUpdate
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SoftwareUpdate/NSCoding.h>
#import <SoftwareUpdate/PKPackageSource.h>

@class SUCatalog;

@interface SUPackageSource : NSObject <NSCoding, PKPackageSource> {

	SUCatalog* _catalog;
	char _packageSourceIsValid;

}

@property (assign) char packageSourceIsValid;              //@synthesize packageSourceIsValid=_packageSourceIsValid - In the implementation block
@property (retain) SUCatalog * catalog;                    //@synthesize catalog=_catalog - In the implementation block
-(SUCatalog *)catalog;
-(id)initWithCatalog:(id)arg1 ;
-(char)registerProduct:(id)arg1 ;
-(id)digestForPackageAtURLPath:(id)arg1 ;
-(id)allPackageReferences;
-(char)doScanFinishedOps;
-(void)setCatalog:(SUCatalog *)arg1 ;
-(char)packageSourceIsValid;
-(void)setPackageSourceIsValid:(char)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

