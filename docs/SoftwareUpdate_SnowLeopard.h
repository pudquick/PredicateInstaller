/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#pragma mark Typedef'd Structures

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
} CDStruct_cc4e5495;

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
    char _field3[1];
} CDStruct_7d936526;

typedef struct {
    unsigned int _field1;
    CDStruct_cc4e5495 _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    CDStruct_7d936526 _field6;
} CDStruct_1031db52;

typedef struct {
    unsigned int _field1;
    CDStruct_cc4e5495 _field2;
    unsigned int _field3;
    CDStruct_7d936526 _field4;
} CDStruct_289ceabb;

#pragma mark -

/*
 * File: /Users/mkuron/Desktop/SoftwareUpdate_SnowLeopard
 * UUID: CFEE4CF8-9D9C-9CE2-2F02-F172BB86C62C
 * Arch: x86_64
 *       Current version: 271.0.0, Compatibility version: 1.0.0
 *
 *       Objective-C Garbage Collection: Unsupported
 */

@protocol NSCoding
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@end

@protocol NSCopying
- (id)copyWithZone:(struct _NSZone *)arg1;
@end

@protocol PKPackageSource
- (id)allPackageReferences;

@optional
- (id)packageReferencesMatchingIdentifier:(id)arg1 version:(id)arg2;
@end

@protocol SUDaemon
- (id)scan;
- (void)scanIfNeeded;
- (void)resetScan;
- (id)productManager;
@end

@protocol SUHelperD
- (BOOL)authorizeTool:(struct AuthorizationOpaqueRef *)arg1;
- (int)prepareForLogoutAndInstall;
- (BOOL)moveSharedFilesFromTempPath:(id)arg1 forProductKey:(id)arg2;
- (BOOL)makeQueues;
- (BOOL)removeMetadataCacheFromUpdates;
- (BOOL)moveMetadataCacheToUpdatesFromPath:(id)arg1;
- (BOOL)removeIndexFromUpdates;
- (BOOL)moveIndexToUpdatesFromPath:(id)arg1;
- (BOOL)removeDistForProductKey:(id)arg1 withFilename:(id)arg2;
- (BOOL)createDirectoryForProductKey:(id)arg1;
- (BOOL)removeProductDirectoryForKey:(id)arg1;
- (id)sessionLock;
- (BOOL)acquireSessionLock:(id)arg1;
- (BOOL)releaseSessionLock:(id)arg1;
- (BOOL)cancelSessionLockBelowPriority:(int)arg1;
- (BOOL)createSpecialModeCookie:(id)arg1;
- (BOOL)removeSpecialModeCookie;
@end

@protocol SUInstallOperationDelegate
- (void)installOperationDidBegin:(id)arg1;
- (void)installOperation:(id)arg1 currentStatus:(id)arg2 progress:(float)arg3 timeRemaining:(double)arg4;
- (void)installOperationDidEnd:(id)arg1;
@end

@protocol SUProductDownloadOperationDelegate
- (void)remoteProductDownloadOperationDidBeginDownloading:(id)arg1;
- (void)remoteProductDownloadOperationDidEnd:(id)arg1;
@end

@interface NSDirectoryServices : NSObject
{
    unsigned int _dirRef;
    NSArray *_nodes;
    unsigned int _nodeRef;
}

- (id)init;
- (void)dealloc;
- (id)getNodes;
- (id)getRecord:(id)arg1 andType:(id)arg2 fromNode:(id)arg3;
- (id)getRecordsOfType:(id)arg1 fromNode:(id)arg2;
- (id)getRecordMatches:(id)arg1 andType:(id)arg2 fromNode:(id)arg3;

@end

@interface SUSClientUtilities : NSObject
{
    NSString *_portName;
    struct __SCDynamicStore *_store;
}

- (id)initWithPortName:(id)arg1;
- (void)dealloc;
- (id)getIPAddress;
- (id)serialNumberString;
- (id)getHostName;
- (id)getMacAddress;

@end

@interface SUCatalogFetch : NSObject
{
    NSDictionary *_catalogDictionary;
    NSURL *_finalURL;
    BOOL _didUseDefaultURL;
    NSError *_error;
}

+ (id)_fetchDictionaryFromURL:(id)arg1 returningError:(id *)arg2;
+ (id)_fetchAppleCatalogDictionaryReturningError:(id *)arg1 finalURL:(id *)arg2;
+ (id)_fetchCatalogDictionaryReturningError:(id *)arg1 finalURL:(id *)arg2 isAppleDefault:(char *)arg3 usingURL:(id)arg4;
- (id)initWithURL:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)catalogDictionary;
- (id)finalURL;
- (BOOL)isDefaultAppleCatalogURL;
- (id)error;

@end

@interface SUCatalog : NSObject
{
    NSURL *_catalogURL;
    NSDictionary *_dictionaryRepresentation;
}

- (id)initWithDictionaryRepresentation:(id)arg1 catalogURL:(id)arg2;
- (id)initWithContentsOfURL:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)catalogURL;
- (id)dictionaryRepresentation;
- (id)productKeys;
- (id)productDictionaryForProductKey:(id)arg1;
- (id)localizationsForProductKey:(id)arg1;
- (id)distributionURLForProductKey:(id)arg1 localization:(id)arg2;
- (id)packageDictionariesForProductKey:(id)arg1;
- (id)extraInfoForProductKey:(id)arg1;

@end

@interface SUProduct : NSObject <NSCoding, NSCopying>
{
    NSString *_productKey;
    PKDistribution *_distribution;
    NSDictionary *_extraInfo;
    NSMutableDictionary *_packageReferenceForPackageIdentifier;
    unsigned long long _installSize;
    PKDistributionController *_distributionController;
    PKDistributionChoice *_swuChoice;
    NSMutableDictionary *_private;
    NSDictionary *_packageInfoForPackageURL;
}

- (id)initWithProductKey:(id)arg1 distribution:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)replacementObjectForPortCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (BOOL)loadMetadataFromPackageDictionaries:(id)arg1 returningError:(id *)arg2;
- (void)didRegisterProductWithPackageSource;
- (id)description;
- (id)productKey;
- (id)distribution;
- (id)choice;
- (id)distributionController;
- (id)choiceItem;
- (id)identifier;
- (id)displayName;
- (id)displayVersion;
- (id)descriptionDataReturningMIMEType:(id *)arg1;
- (id)_resourceDataForKey:(id)arg1 returningMIMEType:(id *)arg2;
- (id)licenseDataReturningMIMEType:(id *)arg1;
- (id)readmeDataReturningMIMEType:(id *)arg1;
- (int)restartAction;
- (id)pkgRefIdentifiersToInstall;
- (id)packageIdentifiersToInstall;

@end

@interface SUCatalogPackageSource : NSObject <PKPackageSource>
{
    NSMutableDictionary *_packageReferencesByProduct;
    SUCatalog *_catalog;
}

- (id)_packageDictionaryForProductKey:(id)arg1 matchingPackageURL:(id)arg2;
- (id)initWithCatalog:(id)arg1;
- (BOOL)registerProduct:(id)arg1;
- (void)dealloc;
- (id)descriptionForProduct:(id)arg1;
- (id)description;
- (id)allPackageReferences;
- (id)packageReferencesMatchingIdentifier:(id)arg1 version:(id)arg2;

@end

@interface SUProductLoadOperation : NSOperation
{
    NSString *_productKey;
    NSURL *_distributionURL;
    NSArray *_packageDictionaries;
    SUCatalogPackageSource *_packageSource;
    NSDictionary *extraInfo;
    NSPredicate *distributionPredicate;
    SUProduct *_product;
    NSError *_error;
}

+ (void)initialize;
- (id)initWithProductKey:(id)arg1 distributionURL:(id)arg2 packageDictionaries:(id)arg3 packageSource:(id)arg4;
- (void)dealloc;
- (void)main;
- (BOOL)_isValidChoice:(id)arg1;
- (id)product;
- (id)error;
@property(retain) NSPredicate *distributionPredicate; // @synthesize distributionPredicate;
@property(retain) NSDictionary *extraInfo; // @synthesize extraInfo;

@end

@interface SUScan : NSObject
{
    NSURL *catalogURL;
    NSString *preferredLocalization;
    NSPredicate *distributionPredicate;
    double _progressValue;
    BOOL _isCancelled;
    BOOL _isExecuting;
    NSOperationQueue *_q;
    unsigned int _operationsCount;
    NSLock *_qLock;
    SUCatalogPackageSource *_packageSource;
    NSArray *installableProducts;
    NSError *_error;
    NSURL *_overrideCatalogURL;
    BOOL _isDevKeyMode;
}

- (id)init;
- (void)dealloc;
- (void)_scanMain:(id)arg1;
- (void)start;
- (void)cancel;
- (void)performSynchronousScan;
- (BOOL)isExecuting;
- (double)progressValue;
- (BOOL)isFinished;
- (id)error;
- (BOOL)hasVisibleProducts;
- (bycopy id)visibleProducts;
- (BOOL)hasInstallableProducts;
- (bycopy id)installableProducts;
@property(retain) NSPredicate *distributionPredicate; // @synthesize distributionPredicate;
@property(retain) NSString *preferredLocalization; // @synthesize preferredLocalization;
@property(retain) NSURL *catalogURL; // @synthesize catalogURL;

@end

@interface SUStatsFile : NSObject
{
    NSMutableDictionary *_statsDict;
    BOOL _fromUpdateNow;
}

+ (id)sharedObject;
- (id)init;
- (void)dealloc;
- (void)setFromUpdateNow:(BOOL)arg1;
- (void)setUpdatesOffered:(id)arg1;
- (void)setUpdatesChosen:(id)arg1;

@end

@interface SUTestDefaults : NSObject
{
}

+ (void)registerTestMode:(id)arg1;
+ (BOOL)shouldEnterTestMode:(id)arg1;
+ (BOOL)shouldUseDevKey;
+ (id)_devKeyURL;
+ (BOOL)loadDevKey;
+ (void)setDevKeyHeader:(id)arg1 data:(id)arg2;
+ (BOOL)useDevKey;
+ (id)devKeyHeaderData;
+ (id)devKeyData;
+ (BOOL)useTestingMode;
+ (BOOL)usingSpecialMode;
+ (void)removeTestMode;
+ (BOOL)okayToUseSpecialModeForPredicate;

@end

@interface SUSignedFlatPkg : NSObject
{
}

+ (BOOL)verifyPackageAtPath:(id)arg1 error:(id *)arg2;
+ (BOOL)evaluateSWUTrustWithRequest:(id)arg1 error:(id *)arg2;

@end

@interface SUPublicKey : NSObject
{
}

+ (id)_applePublicKeyDictionary;
+ (id)applePublicKeyHeaderData;
+ (id)applePublicKeyData;

@end

@interface SUTarSignedTarball : NSObject
{
}

+ (id)untarFile:(id)arg1 toDestination:(id)arg2;
+ (id)expandAndVerifyTarball:(id)arg1 toDestination:(id)arg2 forProductKey:(id)arg3;

@end

@interface SUGzipUtilities : NSObject
{
}

+ (id)dataByUncompressingGzipData:(id)arg1;

@end

@interface SUURLConnection : PKURLConnection
{
}

+ (void)initialize;
+ (id)sendSynchronousRequest:(id)arg1 returningResponse:(id *)arg2 error:(id *)arg3;
+ (id)sessionID;

@end

@interface SULocalProduct : SUProduct
{
    NSString *_productPath;
    NSDictionary *_packageReferences;
}

- (id)initWithProductKey:(id)arg1 productPath:(id)arg2 error:(id *)arg3;
- (void)dealloc;
- (id)productPath;
- (id)distributionPath;
- (BOOL)hasInstallablePackages;
- (id)packageReferenceForPackageIdentifier:(id)arg1;

@end

@interface SUProductManager : NSObject
{
    id _indexFile;
}

+ (id)defaultManager;
+ (id)suggestedProductPathForProduct:(id)arg1 createDirectoryIfNeeded:(BOOL)arg2;
+ (id)suggestedPackagePathForFileName:(id)arg1 product:(id)arg2 createDirectoryIfNeeded:(BOOL)arg3;
+ (id)sharedUpdatesDirectory;
- (id)init;
- (void)dealloc;
- (void)synchronize;
- (BOOL)createDirectoryForProduct:(id)arg1 error:(id *)arg2;
- (BOOL)addPackageAtPath:(id)arg1 forProduct:(id)arg2 error:(id *)arg3;
- (BOOL)registerProduct:(id)arg1;
- (BOOL)unregisterLocalProduct:(id)arg1;
- (id)allLocalProducts;
- (id)localProductForProductKey:(id)arg1;
- (BOOL)isProductFullyDownloaded:(id)arg1;
- (id)productPathForProduct:(id)arg1;
- (id)packagePathForPackageURL:(id)arg1 product:(id)arg2;
- (unsigned long long)downloadedSizeForProduct:(id)arg1;

@end

@interface SUProductManagerIndexFile : NSObject
{
    NSString *_indexPath;
    NSMutableDictionary *_indexDict;
}

- (id)initWithPath:(id)arg1;
- (BOOL)_flushIndexToDisk;
- (void)dealloc;
- (id)allProductKeys;
- (id)pathForProductKey:(id)arg1;
- (void)setPath:(id)arg1 forProductKey:(id)arg2;
- (id)productKeysToInstallAtLogout;
- (void)setProductKeysToInstallAtLogout:(id)arg1;

@end

@interface SUDownloadAndVerifyOperation : NSOperation
{
    NSURL *_url;
    unsigned long long _expectedSize;
    NSString *_destinationFolder;
    NSString *_finalPath;
    NSError *_error;
    NSString *_productKey;
    SUURLDownload *_download;
    BOOL _isBusy;
}

- (id)initWithURL:(id)arg1 expectedDownloadSize:(unsigned long long)arg2 destinationFolder:(id)arg3 productKey:(id)arg4;
- (void)dealloc;
- (id)url;
- (id)download;
- (void)main;
- (void)cancel;
- (id)finalPath;
- (id)error;

@end

@interface SUURLDownload : NSObject
{
    NSURLDownload *_download;
    id _delegate;
    long long _downloadedLength;
    long long _expectedLength;
    NSLock *_progressLock;
    NSMutableArray *_dates;
    NSMutableArray *_lengthNumbers;
    struct __CFRunLoop *_cfRunLoop;
}

- (id)initWithRequest:(id)arg1 delegate:(id)arg2;
- (void)dealloc;
- (void)cancel;
- (long long)downloadedLength;
- (long long)expectedContentLength;
- (BOOL)_isLastDateWithinTimeInterval:(double)arg1;
- (BOOL)_updateProgressData;
- (float)averageBytesPerSecond;
- (double)estimatedTimeRemaining;

@end

@interface SUURLDownloadCache : NSObject
{
}

+ (id)defaultCache;
+ (id)_defaultFileAttributes;
+ (id)_defaultDirectoryAttributes;
+ (id)appCacheDirectory;
- (id)partialDownloadPathForURL:(id)arg1;
- (unsigned long long)partialDownloadFileSizeForURL:(id)arg1;
- (id)resumeDataForURL:(id)arg1;
- (void)setResumeData:(id)arg1 forURL:(id)arg2;
- (BOOL)emptyCache;

@end

@interface SUInstallOperation : NSOperation
{
    NSArray *_localProducts;
    PKInstallRequest *_request;
    id <SUInstallOperationDelegate><NSObject> delegate;
    NSString *_firmwareStatus;
    BOOL _didPreflight;
    BOOL _isInstalling;
    int _state;
    unsigned long long _totalSize;
    NSDate *_startedFirmwareUpdateAt;
    NSError *_error;
    SULocalProduct *_productForError;
}

- (id)initWithLocalProduct:(id)arg1;
- (id)initWithLocalProducts:(id)arg1;
- (void)dealloc;
- (id)localProducts;
- (unsigned long long)totalInstallSize;
- (void)_dispatchStatus:(id)arg1 progress:(float)arg2 timeRemaining:(double)arg3;
- (void)main;
- (BOOL)_performInstallTimeChecks;
- (BOOL)performPreflightChecks;
- (id)error;
- (id)productsForError;
- (void)installClient:(id)arg1 currentState:(int)arg2 package:(id)arg3 progress:(double)arg4 timeRemaining:(double)arg5;
- (void)installClient:(id)arg1 didFailWithError:(id)arg2;
- (void)installClientDidFinish:(id)arg1;
@property id <SUInstallOperationDelegate><NSObject> delegate; // @synthesize delegate;

@end

@interface SUDaemon : NSObject <SUDaemon>
{
    SUScan *_scan;
}

+ (id)sharedDaemon;
- (void)dealloc;
- (id)scan;
- (void)scanIfNeeded;
- (void)resetScan;
- (id)productManager;

@end

@interface SUSessionError : NSObject
{
}

+ (id)errorWithCode:(int)arg1 path:(id)arg2 destination:(id)arg3;
+ (id)errorWithCode:(int)arg1 title:(id)arg2 message:(id)arg3;
+ (id)localizedDescriptionFromError:(id)arg1;

@end

@interface SUSharedAuthorization : NSObject
{
}

+ (struct AuthorizationOpaqueRef *)adminAuthorizationForInstall:(BOOL)arg1;
+ (void)releaseAdminAuthorization;

@end

@interface SUSession : NSObject
{
    NSArray *_products;
    NSString *_downloadDirectory;
    int _options;
    id <NSObject><SUSessionDelegate> _delegate;
    id _private;
}

+ (id)userDownloadsDirectory;
+ (BOOL)preauthorizeForInstallationOfProducts:(id)arg1;
- (id)initWithProducts:(id)arg1 downloadDirectory:(id)arg2 options:(int)arg3 delegate:(id)arg4;
- (void)dealloc;
- (id)products;
- (id)downloadDirectory;
- (int)options;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)start;
- (void)cancel;
- (BOOL)didCancel;
- (BOOL)didFail;
- (id)failedProducts;
- (id)combinedErrorTitle;
- (id)combinedErrorMessage;
- (BOOL)doesInstall;

@end

@interface SUSessionImpl : NSObject <SUProductDownloadOperationDelegate, SUInstallOperationDelegate>
{
    SUSession *_session;
    NSString *_tmpSessionDirectory;
    unsigned long long finishedDownloadLength;
    unsigned long long totalDownloadLength;
    unsigned long long finishedInstallSize;
    unsigned long long totalInstallSize;
    float lastProgress;
    SUProductDownloadOperation *_productDownloadOp;
    NSTimer *_progressTimer;
    float savedCurrentAverageBytesPerSecond;
    NSMutableDictionary *_productToErrorDict;
    BOOL _isCancelled;
}

- (id)initWithSession:(id)arg1;
- (void)dealloc;
- (id)_tmpSessionDirectory;
- (BOOL)createDownloadDirectoryReturningError:(id *)arg1;
- (id)downloadAndVerifyAllProductsSync:(id)arg1;
- (id)installAllProductsSync:(id)arg1;
- (void)cancel;
- (BOOL)didFail;
- (void)_registerError:(id)arg1 forProducts:(id)arg2 installing:(BOOL)arg3;
- (id)combinedErrorTitle;
- (id)combinedErrorMessage;
- (id)productDownloadOp;
- (void)_updateCurrentStatus:(id)arg1 withCurrentOperationProgress:(unsigned long long)arg2 isDeterminate:(BOOL)arg3;
- (void)remoteProductDownloadOperationDidBeginDownloading:(id)arg1;
- (void)remoteProductDownloadOperationDidBeginVerifying:(id)arg1;
- (void)_remoteProductDownloadTimerFired:(id)arg1;
- (void)remoteProductDownloadOperationDidEnd:(id)arg1;
- (void)installOperationDidBegin:(id)arg1;
- (void)installOperation:(id)arg1 currentStatus:(id)arg2 progress:(float)arg3 timeRemaining:(double)arg4;
- (void)installOperationDidEnd:(id)arg1;
- (void)_sendProduct:(id)arg1 didStateChange:(int)arg2;
@property float savedCurrentAverageBytesPerSecond; // @synthesize savedCurrentAverageBytesPerSecond;
@property float lastProgress; // @synthesize lastProgress;
@property unsigned long long totalInstallSize; // @synthesize totalInstallSize;
@property unsigned long long finishedInstallSize; // @synthesize finishedInstallSize;
@property unsigned long long totalDownloadLength; // @synthesize totalDownloadLength;
@property unsigned long long finishedDownloadLength; // @synthesize finishedDownloadLength;

@end

@interface SUProductDownloadOperation : NSOperation
{
    SUProduct *_product;
    NSString *_destinationFolder;
    BOOL _cantWriteToSharedUpdatesFolder;
    id delegate;
    unsigned long long _totalLength;
    unsigned long long _finishedLength;
    SUDownloadAndVerifyOperation *_downloadOp;
    BOOL _isCancelled;
    NSError *_error;
}

- (id)initWithProduct:(id)arg1;
- (void)dealloc;
- (id)product;
- (void)main;
- (void)cancel;
- (unsigned long long)currentLength;
- (unsigned long long)totalLength;
- (double)progress;
- (float)averageBytesPerSecond;
- (id)error;
@property id delegate; // @synthesize delegate;

@end

@interface SUCatalogLoader : NSObject
{
}

+ (id)productByLoadingWithProductKey:(id)arg1 productDictionary:(id)arg2 localization:(id)arg3 baseURL:(id)arg4 overrideBaseURL:(id)arg5 error:(id *)arg6;

@end

@interface SUScanPrefManager : NSObject
{
    NSUserDefaults *_userDefaults;
    BOOL _schedulerActive;
    int _schedulerFrequency;
    NSDate *_schedulerNextFireDate;
    BOOL _backgroundDownload;
}

+ (id)sharedManager;
- (id)init;
- (void)dealloc;

@end

@interface SUPredicateInstallController : NSObject
{
    NSMutableDictionary *_resources;
    id <NSObject><SUPredicateInstallControllerDelegate> _delegate;
    NSDate *_lastCacheRefreshAttempt;
    NSTask *_currentTask;
}

+ (id)_localizedErrorForCode:(int)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)dealloc;
@property(copy) NSString *iconPath;
@property(copy) NSString *title;
@property(copy) NSString *noNetworkTitle;
@property(copy) NSString *noNetworkMessage;
@property(copy) NSString *noServerTitle;
@property(copy) NSString *noServerMessage;
@property(copy) NSString *busyTitle;
@property(copy) NSString *busyMessage;
@property(copy) NSString *notFoundMessage;
@property(copy) NSString *helpAnchor;
@property(copy) NSURL *helpURL;
@property int legalTextType;
@property BOOL requireLicenseAgreement;
- (BOOL)isCacheCurrent;
- (long long)countOfCachedProductsMatchingPredicate:(id)arg1;
- (BOOL)startUpdateUIWithPredicate:(id)arg1 confirmComplete:(BOOL)arg2;
- (BOOL)startUpdateUIWithPredicate:(id)arg1 customTitle:(id)arg2 customIconPath:(id)arg3 assumeExist:(BOOL)arg4 confirmComplete:(BOOL)arg5;
- (id)_optionsFilePath;
- (BOOL)_isUpdateUIAlreadyRunning;
- (id)_writeOptionsFileForPredicate:(id)arg1 confirmComplete:(BOOL)arg2;
- (BOOL)_startSoftwareUpdateWithOptionsFile:(id)arg1;
- (void)_softwareUpdateDidExit:(id)arg1;
- (void)_attemptCacheUpdateInBackground;
- (void)_softwareUpdateDidExitWithCode:(id)arg1;
- (BOOL)_isSoftwareUpdateRunningWithPID:(id)arg1;

@end

@interface SUMetadataCache : NSObject
{
    NSString *_cachePath;
    NSMutableArray *_metadata;
    double _cacheAge;
}

+ (id)sharedCache;
- (id)init;
- (void)dealloc;
- (double)existingCacheAge;
- (void)clearCache;
- (BOOL)addMetadataFromDistribution:(id)arg1 forProductKey:(id)arg2;
- (id)metadataMatchingPredicate:(id)arg1;
- (BOOL)writeCacheToDisk;

@end

@interface SUPrinterScan : NSObject
{
}

+ (BOOL)runMakequeues;

@end

@interface SUHelperProxy : NSObject <SUHelperD>
{
    unsigned int _suhelperd_port;
    unsigned int _client_port;
    NSData *_authRecord;
}

+ (id)sharedProxy;
- (BOOL)isAuthorized;
- (id)init;
- (void)dealloc;
- (BOOL)authorizeTool:(struct AuthorizationOpaqueRef *)arg1;
- (int)prepareForLogoutAndInstall;
- (BOOL)moveSharedFilesFromTempPath:(id)arg1 forProductKey:(id)arg2;
- (BOOL)makeQueues;
- (BOOL)removeMetadataCacheFromUpdates;
- (BOOL)moveMetadataCacheToUpdatesFromPath:(id)arg1;
- (BOOL)removeIndexFromUpdates;
- (BOOL)moveIndexToUpdatesFromPath:(id)arg1;
- (BOOL)createDirectoryForProductKey:(id)arg1;
- (BOOL)removeDistForProductKey:(id)arg1 withFilename:(id)arg2;
- (BOOL)removeProductDirectoryForKey:(id)arg1;
- (id)sessionLock;
- (BOOL)acquireSessionLock:(id)arg1;
- (BOOL)releaseSessionLock:(id)arg1;
- (BOOL)cancelSessionLockBelowPriority:(int)arg1;
- (BOOL)createSpecialModeCookie:(id)arg1;
- (BOOL)removeSpecialModeCookie;
- (BOOL)_launchDaemonMode;
- (BOOL)_createAdminAuthorizationForDaemon;

@end

@interface SUHelper : NSObject <SUHelperD>
{
    NSMutableArray *_authorizedCerts;
    NSMutableDictionary *_openPorts;
    unsigned int _suhelper_service_port;
    unsigned int _port_set;
    SUSessionLock *_sessionLock;
}

- (id)init;
- (void)dealloc;
- (int)run;
- (BOOL)_areRightsValid:(id)arg1;
- (BOOL)_isClientPort:(unsigned int)arg1;
- (unsigned int)_vendMachPortForPID:(int)arg1;
- (void)_removeDeadPort:(unsigned int)arg1;
- (BOOL)_shadowAuthorization:(id)arg1;
- (BOOL)authorizeTool:(struct AuthorizationOpaqueRef *)arg1;
- (int)prepareForLogoutAndInstall;
- (BOOL)moveSharedFilesFromTempPath:(id)arg1 forProductKey:(id)arg2;
- (BOOL)makeQueues;
- (BOOL)removeMetadataCacheFromUpdates;
- (BOOL)moveMetadataCacheToUpdatesFromPath:(id)arg1;
- (BOOL)removeIndexFromUpdates;
- (BOOL)moveIndexToUpdatesFromPath:(id)arg1;
- (BOOL)createDirectoryForProductKey:(id)arg1;
- (BOOL)removeDistForProductKey:(id)arg1 withFilename:(id)arg2;
- (BOOL)removeProductDirectoryForKey:(id)arg1;
- (id)sessionLock;
- (BOOL)acquireSessionLock:(id)arg1;
- (BOOL)releaseSessionLock:(id)arg1;
- (BOOL)cancelSessionLockBelowPriority:(int)arg1;
- (BOOL)createSpecialModeCookie:(id)arg1;
- (BOOL)removeSpecialModeCookie;

@end

@interface SUSessionLock : NSObject
{
    unsigned int _clientUID;
    int _processID;
    int _priority;
}

- (id)initWithPriority:(int)arg1;
- (id)initWithClientUID:(unsigned int)arg1 processID:(int)arg2 priority:(int)arg3;
- (id)initWithNotificationUserInfo:(id)arg1;
- (id)description;
- (unsigned int)clientUID;
- (int)processID;
- (int)priority;
- (BOOL)isMine;
- (BOOL)isSameOwner:(id)arg1;
- (void)notifyAcquired;
- (void)notifyReleased;
- (void)notifyPreempted;
- (void)_postNotificationName:(id)arg1;

@end

@interface NSDirectoryServices (Private)
- (BOOL)openNode:(id)arg1;
- (void)addRecordAtIndex:(unsigned int)arg1 toDictionary:(id)arg2 withBuffer:(CDStruct_7d936526 *)arg3;
- (void)addEntry:(CDStruct_1031db52 *)arg1 withValue:(unsigned int)arg2 toDictionary:(id)arg3 withBuffer:(CDStruct_7d936526 *)arg4;
- (id)nameOfRecord:(CDStruct_289ceabb *)arg1 attributes:(unsigned int)arg2 withBuffer:(CDStruct_7d936526 *)arg3;
@end

@interface SUCatalogFetch (UserDefaults)
+ (id)_userDefaults;
+ (id)catalogURL;
+ (id)appleCatalogURL;
+ (id)defaultAppleCatalogURL;
+ (BOOL)usesOverriddenURL;
+ (void)setAppleCatalogURL:(id)arg1;
@end

@interface SUCatalog (ProductLoading)
- (id)productByLoadingDistributionForProductKey:(id)arg1 localization:(id)arg2 error:(id *)arg3;
@end

@interface SUProduct (VeryPriv)
- (void)_setExtraInfo:(id)arg1;
@end

@interface SUProduct (LoadFromCatalog)
- (id)initWithProductKey:(id)arg1 catalogProductDictionary:(id)arg2 localization:(id)arg3 error:(id *)arg4;
@end

@interface SUProduct (PackageReferences)
- (id)packageInfoForPackageURL:(id)arg1;
- (id)packageReferenceForPackageIdentifier:(id)arg1;
- (BOOL)hasInstallablePackages;
- (id)packageURLs;
- (unsigned long long)downloadSize;
- (unsigned long long)installSize;
@end

@interface SUScan (Impl)
- (id)_productsByScanningCatalog:(id)arg1;
- (void)_postToServerAsync;
- (void)_postToServerMain:(id)arg1;
@end

@interface SUScan (Legacy)
+ (int)_resultCodeFromScan:(id)arg1;
+ (id)performSynchronousScanPreferringLocalization:(id)arg1 includeInactive:(BOOL)arg2 returningError:(id *)arg3 resultCode:(int *)arg4;
+ (id)performSynchronousScanReturningError:(id *)arg1 resultCode:(int *)arg2;
@end

@interface SUScan (Priv)
- (BOOL)_isDevKeyMode;
- (bycopy id)_overrideCatalogURL;
@end

@interface SUStatsFile (CFPreferencesAnyUser_StatsFile)
+ (id)_errorDictionaryWithError:(id)arg1;
+ (id)_lastDownloadErrorDict;
+ (void)setLastDownloadError:(id)arg1;
+ (id)_lastInstallErrorDict;
+ (void)setLastInstallError:(id)arg1;
+ (id)createUUID;
+ (id)anonymousUUID;
@end

@interface SUStatsFile (Transport)
+ (void)setPostServerURL:(id)arg1;
- (BOOL)postToServer;
@end

@interface SUStatsFile (ClientConfig)
+ (id)_systemVersionDictionaryObjectForKey:(id)arg1 useServerVersion:(BOOL)arg2;
+ (id)_versionOfSystemProduct:(BOOL)arg1;
+ (id)_versionOfSystemBuild:(BOOL)arg1;
+ (id)_clientConfigDictionaryFromUpdateNow:(BOOL)arg1;
@end

@interface NSDictionary (CaseInsensitive)
- (id)objectForCaseInsensitiveKey:(id)arg1;
@end

@interface NSString (Base64Encoding)
+ (id)_stringByBase64EncodingData:(id)arg1;
@end

@interface SUProductManager (InstallAtLogout)
- (void)setProductsToInstallAtLogout:(id)arg1;
- (id)_productForProductKey:(id)arg1;
- (id)productsToInstallAtLogout;
@end

@interface SUDownloadAndVerifyOperation (SUDownloadDelegate)
- (void)suDownloadDidBegin:(id)arg1;
- (void)suDownload:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)suDownload:(id)arg1 didCancelAuthenticationChallenge:(id)arg2;
- (void)suDownload:(id)arg1 didReceiveResponse:(id)arg2;
- (void)suDownload:(id)arg1 didProgressChange:(float)arg2;
- (void)suDownload:(id)arg1 didFinishWritingToPath:(id)arg2;
- (void)suDownload:(id)arg1 didFailWithError:(id)arg2;
@end

@interface SUDownloadAndVerifyOperation (ExpandAndVerify)
- (id)_verifyTarball:(id)arg1 expandToDestination:(id)arg2 error:(id *)arg3;
- (id)_verifyFlatPackage:(id)arg1 expectedDownloadSize:(unsigned long long)arg2 moveToDestination:(id)arg3 error:(id *)arg4;
- (id)processDownloadedFileAtPath:(id)arg1 expectedDownloadSize:(unsigned long long)arg2 destination:(id)arg3 error:(id *)arg4;
@end

@interface SUURLDownload (NSURLDownloadDelegate)
- (void)downloadDidBegin:(id)arg1;
- (id)download:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)download:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)download:(id)arg1 didCancelAuthenticationChallenge:(id)arg2;
- (void)download:(id)arg1 didReceiveResponse:(id)arg2;
- (void)download:(id)arg1 willResumeWithResponse:(id)arg2 fromByte:(long long)arg3;
- (void)download:(id)arg1 didReceiveDataOfLength:(unsigned long long)arg2;
- (void)downloadDidFinish:(id)arg1;
- (void)download:(id)arg1 didFailWithError:(id)arg2;
@end

@interface SUSession (SubclassMethods)
- (void)sessionDidBegin;
- (void)sessionDidCancel;
- (void)sessionDidCompleteProducts:(id)arg1;
- (void)sessionWillEnd;
@end

@interface SUSession (MainThread)
- (void)_sessionMain:(id)arg1;
@end

@interface SUSession (CallbackDispatching)
- (void)__performCallbackWithArguments:(id)arg1;
- (void)_dispatchDelegateCallbackOnMainThread:(SEL)arg1 withObject:(id)arg2;
- (void)_dispatchDelegateCallbackOnMainThread:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (void)_dispatchDelegateCallbackOnMainThread:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3 withObject:(id)arg4;
@end

@interface SUSession (Legacy)
+ (unsigned long long)diskSizeRequiredForProducts:(id)arg1 doesInstall:(BOOL)arg2;
+ (unsigned long long)diskSizeFreeOnVolume:(id)arg1;
- (float)_currentAverageBytesPerSecond;
- (unsigned long long)_currentDownloadLength;
- (unsigned long long)_totalDownloadLength;
@end

@interface SUProduct (AppleInternal)
- (BOOL)_isStaged;
- (BOOL)_isRecommended;
- (BOOL)_isRecommendedAllowingStaged:(BOOL)arg1;
@end

@interface SUProduct (Private)
+ (BOOL)_willProductsRequireLogout:(id)arg1;
+ (int)_installActionRequiredByProducts:(id)arg1;
+ (BOOL)_willProductsRequireAuthorizationIfAdmin:(id)arg1;
+ (id)_productKeysFromProducts:(id)arg1;
- (id)_label;
- (id)_labelVersion;
- (id)_disabledGroupID;
- (BOOL)_willRequireAuthorizationIfAdmin;
@end

@interface SUProduct (ForSoftwareUpdateServer)
- (int)highestRestartAction;
- (long long)totalDownloadSize;
@end

@interface SUScanPrefManager (CFPreferencesAnyUser)
- (id)lastCheckAttemptDate;
- (void)setLastCheckAttemptDate:(id)arg1;
- (id)lastCheckSuccessfulDate;
- (void)setLastCheckSuccessfulDate:(id)arg1;
- (int)lastCheckResultCode;
- (void)setLastCheckResultCode:(int)arg1;
@end

@interface SUScanPrefManager (CFPreferencesCurrentUser)
- (id)inactiveProductLabels;
- (void)setInactiveProductLabels:(id)arg1;
@end

@interface SUScanPrefManager (LWSchedulerCurrentUser)
- (void)loadSchedulerPreferences;
- (void)saveSchedulerPreferences;
- (BOOL)isCheckScheduled;
- (void)setCheckScheduled:(BOOL)arg1;
- (int)checkScheduledFrequency;
- (void)setCheckScheduledFrequency:(int)arg1;
- (id)nextCheckScheduledDate;
- (void)setNextCheckScheduledDate:(id)arg1;
- (BOOL)doesBackgroundDownload;
- (void)setBackgroundDownload:(BOOL)arg1;
@end

@interface PKDistribution (SUAdditions)
+ (id)_softwareUpdateDistributionWithContentsOfURL:(id)arg1 error:(id *)arg2;
+ (id)_softwareUpdateDistributionWithData:(id)arg1 error:(id *)arg2;
- (void)_mungeInvisibleChoicesOutline;
- (id)_softwareUpdateInterfaceType;
- (id)_softwareUpdateChoice;
@end

@interface NSTask (Timeout)
- (int)_runWithTimeout:(double)arg1;
@end

@interface SUHelper (PrivateHelperMethods)
- (BOOL)_isSaneProductKey:(id)arg1;
- (id)_sharedPathForProductKey:(id)arg1 createIfMissing:(BOOL)arg2;
- (BOOL)_moveFileAndSetSanePermissionsFrom:(id)arg1 to:(id)arg2;
- (id)_trustFilePath;
@end
