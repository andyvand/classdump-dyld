/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:32 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PassKit.framework/Versions/A/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <PassKit/NSCoding.h>

@class NSURL, NSMutableArray, NSDictionary, NSImage, NSColor, NSString, NSArray, NSDate, NSData;

@interface PKPass : NSObject <NSCoding> {

	NSURL* _tempFolder;
	NSURL* _manifestFileURL;
	NSURL* _passFileURL;
	NSURL* _signatureFileURL;
	NSURL* _backgroundFileURL;
	NSMutableArray* _headerFields;
	NSMutableArray* _primaryFields;
	NSMutableArray* _secondaryFields;
	NSMutableArray* _auxiliaryFields;
	NSMutableArray* _backFields;
	NSDictionary* _pass;
	char _isVoided;
	char _certificateIsRevoked;
	char _ubiquitous;
	char _ubiquityContainerExists;
	int _barcodeType;
	int _passType;
	int _transitType;
	int _sharingMethod;
	NSImage* _icon;
	NSImage* _logo;
	NSImage* _background;
	NSImage* _thumbnail;
	NSImage* _footer;
	NSImage* _strip;
	NSColor* _foregroundColor;
	NSColor* _backgroundColor;
	NSColor* _labelColor;
	NSString* _passTypeIdentifier;
	NSString* _serialNumber;
	NSURL* _webServiceURL;
	NSString* _authToken;
	NSString* _teamIdentifier;
	NSArray* _locations;
	NSString* _barcodeMessage;
	NSString* _barcodeEncoding;
	NSString* _barcodeText;
	NSString* _organizationName;
	NSString* _logoText;
	NSDate* _expirationDate;
	NSDictionary* _sharingInfo;
	NSDate* _passCreatedDate;
	NSDate* _passModifiedDate;
	NSString* _ubiquitousPassHash;
	NSString* _passHash;
	NSString* _filename;
	NSData* _passData;

}

@property (readonly) NSString * ubiquitousFilename; 
@property (retain) NSImage * icon;                                //@synthesize icon=_icon - In the implementation block
@property (retain) NSImage * logo;                                //@synthesize logo=_logo - In the implementation block
@property (retain) NSImage * background;                          //@synthesize background=_background - In the implementation block
@property (retain) NSImage * thumbnail;                           //@synthesize thumbnail=_thumbnail - In the implementation block
@property (retain) NSImage * footer;                              //@synthesize footer=_footer - In the implementation block
@property (retain) NSImage * strip;                               //@synthesize strip=_strip - In the implementation block
@property (retain) NSColor * foregroundColor;                     //@synthesize foregroundColor=_foregroundColor - In the implementation block
@property (retain) NSColor * backgroundColor;                     //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) NSColor * labelColor;                //@synthesize labelColor=_labelColor - In the implementation block
@property (retain) NSString * passTypeIdentifier;                 //@synthesize passTypeIdentifier=_passTypeIdentifier - In the implementation block
@property (retain) NSString * serialNumber;                       //@synthesize serialNumber=_serialNumber - In the implementation block
@property (retain) NSURL * webServiceURL;                         //@synthesize webServiceURL=_webServiceURL - In the implementation block
@property (retain) NSString * authToken;                          //@synthesize authToken=_authToken - In the implementation block
@property (retain) NSString * teamIdentifier;                     //@synthesize teamIdentifier=_teamIdentifier - In the implementation block
@property (retain) NSArray * locations;                           //@synthesize locations=_locations - In the implementation block
@property (retain) NSString * barcodeMessage;                     //@synthesize barcodeMessage=_barcodeMessage - In the implementation block
@property (assign) int barcodeType;                               //@synthesize barcodeType=_barcodeType - In the implementation block
@property (retain) NSString * barcodeEncoding;                    //@synthesize barcodeEncoding=_barcodeEncoding - In the implementation block
@property (nonatomic,retain) NSString * barcodeText;              //@synthesize barcodeText=_barcodeText - In the implementation block
@property (readonly) char tallBarcode; 
@property (retain) NSString * organizationName;                   //@synthesize organizationName=_organizationName - In the implementation block
@property (retain) NSString * logoText;                           //@synthesize logoText=_logoText - In the implementation block
@property (assign) int passType;                                  //@synthesize passType=_passType - In the implementation block
@property (readonly) NSString * passTypeString; 
@property (assign) int transitType;                               //@synthesize transitType=_transitType - In the implementation block
@property (copy) NSDate * expirationDate;                         //@synthesize expirationDate=_expirationDate - In the implementation block
@property (assign) char isVoided;                                 //@synthesize isVoided=_isVoided - In the implementation block
@property (assign) char certificateIsRevoked;                     //@synthesize certificateIsRevoked=_certificateIsRevoked - In the implementation block
@property (assign) int sharingMethod;                             //@synthesize sharingMethod=_sharingMethod - In the implementation block
@property (copy) NSDictionary * sharingInfo;                      //@synthesize sharingInfo=_sharingInfo - In the implementation block
@property (readonly) char isExpired; 
@property (readonly) char isExpiredOrInvalid; 
@property (retain) NSArray * headerFields;                        //@synthesize headerFields=_headerFields - In the implementation block
@property (retain) NSArray * primaryFields;                       //@synthesize primaryFields=_primaryFields - In the implementation block
@property (retain) NSArray * secondaryFields;                     //@synthesize secondaryFields=_secondaryFields - In the implementation block
@property (retain) NSArray * auxiliaryFields;                     //@synthesize auxiliaryFields=_auxiliaryFields - In the implementation block
@property (retain) NSArray * backFields;                          //@synthesize backFields=_backFields - In the implementation block
@property (readonly) CGSize windowSize; 
@property (readonly) NSString * windowTitle; 
@property (assign,nonatomic) char ubiquitous;                     //@synthesize ubiquitous=_ubiquitous - In the implementation block
@property (assign) char ubiquityContainerExists;                  //@synthesize ubiquityContainerExists=_ubiquityContainerExists - In the implementation block
@property (retain) NSDate * passCreatedDate;                      //@synthesize passCreatedDate=_passCreatedDate - In the implementation block
@property (retain) NSDate * passModifiedDate;                     //@synthesize passModifiedDate=_passModifiedDate - In the implementation block
@property (retain) NSString * ubiquitousPassHash;                 //@synthesize ubiquitousPassHash=_ubiquitousPassHash - In the implementation block
@property (retain) NSString * passHash;                           //@synthesize passHash=_passHash - In the implementation block
@property (retain) NSString * filename;                           //@synthesize filename=_filename - In the implementation block
@property (retain) NSData * passData;                             //@synthesize passData=_passData - In the implementation block
+(id)passWithPassFile:(id)arg1 error:(id*)arg2 ;
+(char)validatePassWithData:(id)arg1 error:(id*)arg2 ;
+(id)passWithPassData:(id)arg1 error:(id*)arg2 ;
+(void)validatePassWithData:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
+(id)passWithSerializedData:(id)arg1 error:(id*)arg2 ;
+(id)placeholderWithPassData:(id)arg1 error:(id*)arg2 ;
+(id)passWithPassFile:(id)arg1 ;
+(id)passWithPassData:(id)arg1 ;
-(id)framedIcon;
-(NSDate *)expirationDate;
-(void)setLocations:(NSArray *)arg1 ;
-(void)setSerialNumber:(NSString *)arg1 ;
-(NSString *)serialNumber;
-(void)setLabelColor:(NSColor *)arg1 ;
-(NSImage *)background;
-(void)setBackground:(NSImage *)arg1 ;
-(char)isExpired;
-(NSString *)passTypeString;
-(NSString *)organizationName;
-(NSImage *)footer;
-(NSImage *)strip;
-(NSString *)passTypeIdentifier;
-(NSURL *)webServiceURL;
-(NSString *)teamIdentifier;
-(NSString *)barcodeMessage;
-(NSString *)barcodeEncoding;
-(NSString *)barcodeText;
-(NSString *)logoText;
-(NSArray *)headerFields;
-(NSArray *)primaryFields;
-(NSArray *)secondaryFields;
-(NSArray *)auxiliaryFields;
-(NSArray *)backFields;
-(NSDate *)passCreatedDate;
-(NSDate *)passModifiedDate;
-(NSString *)ubiquitousPassHash;
-(NSString *)passHash;
-(NSData *)passData;
-(NSDictionary *)sharingInfo;
-(void)setFooter:(NSImage *)arg1 ;
-(void)setStrip:(NSImage *)arg1 ;
-(void)setPassTypeIdentifier:(NSString *)arg1 ;
-(void)setWebServiceURL:(NSURL *)arg1 ;
-(void)setTeamIdentifier:(NSString *)arg1 ;
-(void)setBarcodeMessage:(NSString *)arg1 ;
-(void)setBarcodeEncoding:(NSString *)arg1 ;
-(void)setBarcodeText:(NSString *)arg1 ;
-(void)setOrganizationName:(NSString *)arg1 ;
-(void)setLogoText:(NSString *)arg1 ;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(void)setHeaderFields:(NSArray *)arg1 ;
-(void)setPrimaryFields:(NSArray *)arg1 ;
-(void)setSecondaryFields:(NSArray *)arg1 ;
-(void)setAuxiliaryFields:(NSArray *)arg1 ;
-(void)setBackFields:(NSArray *)arg1 ;
-(char)isVoided;
-(char)certificateIsRevoked;
-(int)passType;
-(void)setUbiquitousPassHash:(NSString *)arg1 ;
-(int)barcodeType;
-(id)serializedData;
-(void)insertObject:(id)arg1 inHeaderFieldsAtIndex:(long long)arg2 ;
-(void)removeObjectFromHeaderFieldsAtIndex:(unsigned long long)arg1 ;
-(void)insertObject:(id)arg1 inPrimaryFieldsAtIndex:(long long)arg2 ;
-(void)removeObjectFromPrimaryFieldsAtIndex:(unsigned long long)arg1 ;
-(void)insertObject:(id)arg1 inSecondaryFieldsAtIndex:(long long)arg2 ;
-(void)removeObjectFromSecondaryFieldsAtIndex:(unsigned long long)arg1 ;
-(void)insertObject:(id)arg1 inAuxiliaryFieldsAtIndex:(long long)arg2 ;
-(void)removeObjectFromAuxiliaryFieldsAtIndex:(unsigned long long)arg1 ;
-(void)insertObject:(id)arg1 inBackFieldsAtIndex:(long long)arg2 ;
-(void)removeObjectFromBackFieldsAtIndex:(unsigned long long)arg1 ;
-(char)isExpiredOrInvalid;
-(CGSize)windowSize;
-(NSString *)ubiquitousFilename;
-(void)setUbiquitous:(char)arg1 ;
-(void)_setUbiquitousWithoutSendingToiCloud:(char)arg1 ;
-(char)tallBarcode;
-(id)sharingItemURL;
-(void)setBarcodeType:(int)arg1 ;
-(void)setPassType:(int)arg1 ;
-(int)transitType;
-(void)setTransitType:(int)arg1 ;
-(void)setIsVoided:(char)arg1 ;
-(void)setCertificateIsRevoked:(char)arg1 ;
-(int)sharingMethod;
-(void)setSharingMethod:(int)arg1 ;
-(void)setSharingInfo:(NSDictionary *)arg1 ;
-(char)ubiquitous;
-(char)ubiquityContainerExists;
-(void)setUbiquityContainerExists:(char)arg1 ;
-(void)setPassCreatedDate:(NSDate *)arg1 ;
-(void)setPassModifiedDate:(NSDate *)arg1 ;
-(void)setPassHash:(NSString *)arg1 ;
-(void)setPassData:(NSData *)arg1 ;
-(void)setAuthToken:(NSString *)arg1 ;
-(NSString *)authToken;
-(NSImage *)logo;
-(void)setLogo:(NSImage *)arg1 ;
-(id)init;
-(void)setBackgroundColor:(NSColor *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setIcon:(NSImage *)arg1 ;
-(NSImage *)icon;
-(NSString *)filename;
-(void)setFilename:(NSString *)arg1 ;
-(NSColor *)labelColor;
-(NSColor *)backgroundColor;
-(NSString *)windowTitle;
-(NSColor *)foregroundColor;
-(void)setForegroundColor:(NSColor *)arg1 ;
-(void)setThumbnail:(NSImage *)arg1 ;
-(NSImage *)thumbnail;
-(NSArray *)locations;
@end

