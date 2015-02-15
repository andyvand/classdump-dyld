/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:55:40 AM Central European Standard Time
* Operating System: Versie 10.10.2 (build 14C109)
* Image Source: /Applications/Spotify.app/Contents/MacOS/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class SPAutocompleteMenuWindow;

typedef struct _NSZone* NSZoneRef;

typedef struct CGImage* CGImageRef;

typedef struct OpaqueEventHandlerRef* OpaqueEventHandlerRefRef;

typedef struct __CFMachPort* CFMachPortRef;

typedef struct __CFRunLoopSource* CFRunLoopSourceRef;

typedef struct __CFRunLoop* CFRunLoopRef;

typedef struct ClosurePtr<void (fastdelegate::detail::GenericClass::*)(unsigned int), void (*)(unsigned int), void (*)(unsigned int)> {
	GenericClass m_pthis;
	 m_pFunction;
} ClosurePtr<void (fastdelegate::detail::GenericClass::*)(unsigned int), void (*)(unsigned int), void (*)(unsigned int)>;

typedef struct FastDelegate1<unsigned int, void> {
	ClosurePtr<void (fastdelegate::detail::GenericClass::*)(unsigned int), void (*)(unsigned int), void (*)(unsigned int)> m_Closure;
} FastDelegate1<unsigned int, void>;

typedef struct SPACMWWrap {
	SPAutocompleteMenuWindow* objc;
} SPACMWWrap;

typedef struct NSPoint {
	float x;
	float y;
} NSPoint;

typedef struct NSSize {
	float width;
	float height;
} NSSize;

typedef struct NSRect {
	NSPoint origin;
	NSSize size;
} NSRect;

typedef struct ClosurePtr<void (fastdelegate::detail::GenericClass::*)(bool, const base::String &), void (*)(bool, const base::String &), void (*)(bool, const base::String &)> {
	GenericClass m_pthis;
	 m_pFunction;
} ClosurePtr<void (fastdelegate::detail::GenericClass::*)(bool, const base::String &), void (*)(bool, const base::String &), void (*)(bool, const base::String &)>;

typedef struct FastDelegate2<bool, const base::String &, void> {
	ClosurePtr<void (fastdelegate::detail::GenericClass::*)(bool, const base::String &), void (*)(bool, const base::String &), void (*)(bool, const base::String &)> m_Closure;
} FastDelegate2<bool, const base::String &, void>;

typedef struct ClosurePtr<void (fastdelegate::detail::GenericClass::*)(const sp::AutocompleteDelegate::Completion &), void (*)(const sp::AutocompleteDelegate::Completion &), void (*)(const sp::AutocompleteDelegate::Completion &)> {
	GenericClass m_pthis;
	 m_pFunction;
} ClosurePtr<void (fastdelegate::detail::GenericClass::*)(const sp::AutocompleteDelegate::Completion &), void (*)(const sp::AutocompleteDelegate::Completion &), void (*)(const sp::AutocompleteDelegate::Completion &)>;

typedef struct FastDelegate1<const sp::AutocompleteDelegate::Completion &, void> {
	ClosurePtr<void (fastdelegate::detail::GenericClass::*)(const sp::AutocompleteDelegate::Completion &), void (*)(const sp::AutocompleteDelegate::Completion &), void (*)(const sp::AutocompleteDelegate::Completion &)> m_Closure;
} FastDelegate1<const sp::AutocompleteDelegate::Completion &, void>;

typedef struct String {
	/*function pointer*/void* ;
	char* t;
	StrPtrStruct) _d;
} String;

typedef struct Completion {
	String displayable;
	String identifier;
	int entry_type;
	BOOL show_identifier;
	FastDelegate1<const sp::AutocompleteDelegate::Completion &, void> command;
} Completion;

typedef struct Array<sp::AutocompleteDelegate::Completion, const sp::AutocompleteDelegate::Completion &, 64, true> {
	Completion _mem;
	unsigned _alloc;
	unsigned _count;
} Array<sp::AutocompleteDelegate::Completion, const sp::AutocompleteDelegate::Completion &, 64, true>;

typedef struct __SCNetworkReachability* SCNetworkReachabilityRef;

typedef struct shared_count {
	sp_counted_base pi_;
} shared_count;

typedef struct shared_ptr<int> {
	int px;
	shared_count pn;
} shared_ptr<int>;
