/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/SecurityFoundation.framework/Versions/A/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SecurityFoundation/SecurityFoundation-Structs.h>
@class NSMutableArray, NSMutableDictionary, NSDate, NSString, SFOidParser;

@interface SFCertificateData_ivars : NSObject {

	NSMutableArray* _labels;
	NSMutableArray* _fields;
	NSMutableArray* _indent;
	unsigned long long _titleIndex;
	unsigned long long _expDateIndex;
	unsigned long long _subjectField;
	unsigned long long _issuerField;
	unsigned long long _numFields;
	char _expired;
	char _isRoot;
	char _isLeaf;
	char _trustChanged;
	OpaqueSecCertificateRefRef _certRef;
	cssm_data _certData;
	long long _clHandle;
	NSMutableArray* _policies;
	NSMutableArray* _policyNames;
	NSMutableArray* _policyValues;
	NSMutableArray* _trustValues;
	unsigned _trustDomain;
	NSMutableDictionary* _fieldIndexes;
	char _addToFieldIndexes;
	char _isCA;
	unsigned long long _sigAlgIndex;
	unsigned long long _issuerIndex;
	unsigned long long _serialIndex;
	SecTrustRef _trustRef;
	NSDate* _firstValidDate;
	NSDate* _expirationDate;
	NSString* _statusString;
	int _certStatus;
	char _parsed;
	char _parseFullCert;
	char _hasResponder;
	char _hasCRL;
	SFOidParser* _oidParser;

}
-(id)oidParser;
-(void)setOidParser:(id)arg1 ;
-(void)dealloc;
@end

