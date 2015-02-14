/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:44 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/PDFKit.framework/Versions/A/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PDFKit/PDFKit-Structs.h>
@class NSURL, PDFForm, NSMutableArray, NSString, NSArray, PDFSelection, PDFOutline, NSMutableDictionary, NSMapTable, NSOperationQueue;

@interface PDFDocumentPrivateVars : NSObject {

	CGDataProviderRef provider;
	CGPDFDocumentRef pdfRef;
	NSURL* url;
	id delegate;
	PDFForm* formData;
	NSMutableArray* pageArray;
	CGRect defaultCrop;
	NSRange subrange;
	NSMutableArray* findResults;
	char finding;
	long long findPageIndex;
	long long findCharIndex;
	long long lastFindPageIndex;
	long long lastFindCharIndex;
	NSString* findString;
	NSArray* findStrings;
	unsigned long long findOptions;
	int findModel;
	PDFSelection* findInstance;
	long long ownership;
	NSString* unlockedWithPassword;
	PDFOutline* outline;
	char checkedOutline;
	NSMutableDictionary* attributes;
	int documentHasText;
	long long lastPageIndexRemoved;
	NSMapTable* pageDictionaryMap;
	DDScannerRef dataDetector;
	NSOperationQueue* dataDetectorQueue;
	NSOperationQueue* pageLayoutThreadQueue;
	NSMutableArray* unsupportedElements;
	xpc_connection_sRef fileRefsValidatorServiceConnection;
	char cacheUsingDisplayLists;
	char sortAnnotations;
	char formDataLoaded;
	char respondsToDidUnlock;
	char respondsToDidFindMatch;
	char respondsToDidBeginDocumentFind;
	char respondsToDidEndDocumentFind;
	char respondsToDidBeginPageFind;
	char respondsToDidEndPageFind;
	char respondsToDidMatchString;
	char respondsToPrintJobTitle;
	char respondsToClassForPage;
	char respondsToClassForAnnotation;
	NSArray* documentCatalogMetadata;
	NSString* xmpNameSpace;
	NSString* xmpPrefix;
	NSString* xmpRootPath;

}
@end

