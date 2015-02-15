/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:06 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/NSSecureCoding.h>

@class NSString, NSError;

@interface CKZonePCSDiagnosticInformation : NSObject <NSSecureCoding> {

	char _wasRepaired;
	int _pcsStatus;
	NSString* _pcsDiagnosticString;
	NSError* _pcsError;

}

@property (assign,nonatomic) char wasRepaired;                            //@synthesize wasRepaired=_wasRepaired - In the implementation block
@property (assign,nonatomic) int pcsStatus;                               //@synthesize pcsStatus=_pcsStatus - In the implementation block
@property (nonatomic,retain) NSString * pcsDiagnosticString;              //@synthesize pcsDiagnosticString=_pcsDiagnosticString - In the implementation block
@property (nonatomic,retain) NSError * pcsError;                          //@synthesize pcsError=_pcsError - In the implementation block
+(char)supportsSecureCoding;
-(int)pcsStatus;
-(char)wasRepaired;
-(NSString *)pcsDiagnosticString;
-(NSError *)pcsError;
-(void)setWasRepaired:(char)arg1 ;
-(void)setPcsStatus:(int)arg1 ;
-(void)setPcsDiagnosticString:(NSString *)arg1 ;
-(void)setPcsError:(NSError *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

