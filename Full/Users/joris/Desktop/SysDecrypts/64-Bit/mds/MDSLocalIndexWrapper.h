/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:58:14 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Users/joris/Desktop/SysDecrypts/64-Bit/mds
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <mds/mds-Structs.h>
#import <mds/MDSIndexWrapper.h>

@interface MDSLocalIndexWrapper : MDSIndexWrapper {

	SCD_Struct_MD66* _volumeParams;

}
-(void)preHeatPermissions:(RLEOIDArrayRef)arg1 ;
-(SCD_Struct_MD68*)volumeInfo:(id)arg1 ;
-(void)setVolumeParams:(SCD_Struct_MD68*)arg1 ;
-(SI_PersistentIDStoreRef)psidStore;
-(oneway void)release;
-(id)retain;
@end
