/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:06 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdate.framework/Versions/A/SoftwareUpdate
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SUProduct;

@interface SUProductForSUS : NSObject {

	SUProduct* _product;

}
-(id)descriptionDataReturningMIMEType:(id*)arg1 ;
-(long long)restartAction;
-(unsigned long long)downloadSize;
-(id)initWithProductKey:(id)arg1 catalogProductDictionary:(id)arg2 localization:(id)arg3 error:(id*)arg4 ;
-(void)dealloc;
-(id)displayName;
-(id)displayVersion;
@end

