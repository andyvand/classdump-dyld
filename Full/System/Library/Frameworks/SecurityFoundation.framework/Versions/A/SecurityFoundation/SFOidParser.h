/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:00 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/SecurityFoundation.framework/Versions/A/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SecurityFoundation/SecurityFoundation-Structs.h>
@class NSDictionary;

@interface SFOidParser : NSObject {

	cssm_data* configData;
	NSDictionary* oidDict;

}
+(id)killTrailingString:(id)arg1 end:(id)arg2 ;
+(id)printDataAsHex:(const cssm_data*)arg1 maxToPrint:(unsigned)arg2 ;
+(id)printStringEscapingInvisibles:(id)arg1 ;
+(id)printStringWithEncoding:(const cssm_data*)arg1 encoding:(unsigned long long)arg2 ;
+(unsigned)DER_ToInt:(const cssm_data*)arg1 ;
+(id)printString:(const cssm_data*)arg1 encoding:(unsigned long long)arg2 ;
+(id)printBlobBytes:(id)arg1 quanta:(id)arg2 bytesToPrint:(unsigned)arg3 thing:(const cssm_data*)arg4 ;
+(id)printTagTypeString:(unsigned char)arg1 ;
+(char)compareOid:(const cssm_data*)arg1 toOid:(const cssm_data*)arg2 ;
+(id)printCertTypeString:(unsigned)arg1 isRoot:(char)arg2 ;
+(id)printNumericData:(const cssm_data*)arg1 ;
+(id)printDigest:(unsigned)arg1 thingToDigest:(const cssm_data*)arg2 ;
+(id)printStringRemovingPercentEscapes:(id)arg1 ;
-(id)cachedObjectForKey:(id)arg1 ;
-(id)parseOidWithDictionary:(const cssm_data*)arg1 ;
-(id)printOidAsDecimal:(const cssm_data*)arg1 ;
-(id)parseOid:(const cssm_data*)arg1 ;
-(id)printOid:(const cssm_data*)arg1 ;
-(id)printECDSASigAlgParams:(cssm_data*)arg1 ;
-(id)printDerThing:(unsigned char)arg1 thing:(const cssm_data*)arg2 ;
-(id)printSigAlg:(cssm_x509_algorithm_identifier*)arg1 ;
-(id)printSigAlgParams:(cssm_x509_algorithm_identifier*)arg1 ;
-(id)init;
-(void)dealloc;
-(void)cleanup;
@end

