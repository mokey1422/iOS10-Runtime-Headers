/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKClassSession : NSObject <CATTransportDelegate> {
    id  _clientIdentity;
    <CRKClassSessionDelegate> * _delegate;
    double  _failedConnectionRetryInterval;
    unsigned short  _flags;
    DMFControlSessionIdentifier * _identifier;
    double  _lostBeaconTimeout;
    NSArray * _trustedCertificates;
    double  _willLoseBeaconWarningTimeout;
    CATStateMachine * mFSM;
    CATTransport * mTransport;
}

@property (nonatomic, readonly) id clientIdentity;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CRKClassSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) double failedConnectionRetryInterval;
@property (nonatomic) unsigned short flags;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) DMFControlSessionIdentifier *identifier;
@property (nonatomic) double lostBeaconTimeout;
@property (nonatomic, retain) CATStateMachine *stateMachine;
@property (readonly) Class superclass;
@property (nonatomic, retain) CATTransport *transport;
@property (nonatomic, readonly, copy) NSArray *trustedCertificates;
@property (nonatomic) double willLoseBeaconWarningTimeout;

- (void).cxx_destruct;
- (void)cancelConnectionAttempt;
- (id)clientIdentity;
- (id)delegate;
- (void)delegateConnected;
- (void)delegateDidChangeState:(long long)arg1 previousState:(long long)arg2;
- (void)delegateDisconnected;
- (void)delegateIdleWithContext:(id)arg1;
- (void)delegateInRangeWithContext:(id)arg1;
- (void)delegateInvalidatedWithState:(id)arg1;
- (void)delegateNoNetworkWithContext:(id)arg1;
- (void)delegateOutOfRangeWithContext:(id)arg1;
- (void)delegateWillLoseBeacon;
- (void)didConnect;
- (void)disconnect;
- (double)failedConnectionRetryInterval;
- (void)failedToConnect;
- (unsigned short)flags;
- (void)foundBeaconWithFlags:(unsigned short)arg1;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 clientIdentity:(id)arg2 trustedCertificates:(id)arg3;
- (void)invalidate;
- (void)localWiFiBecameAvailable;
- (void)localWiFiBecameUnavailable;
- (void)lostBeacon;
- (double)lostBeaconTimeout;
- (void)lostConnection;
- (void)registerDefaults;
- (void)setDelegate:(id)arg1;
- (void)setFailedConnectionRetryInterval:(double)arg1;
- (void)setFlags:(unsigned short)arg1;
- (void)setLostBeaconTimeout:(double)arg1;
- (void)setStateMachine:(id)arg1;
- (void)setTransport:(id)arg1;
- (void)setWillLoseBeaconWarningTimeout:(double)arg1;
- (id)stateMachine;
- (id)studentSocketOptions;
- (id)transport;
- (void)transport:(id)arg1 didInterruptWithError:(id)arg2;
- (void)transportDidConnect:(id)arg1;
- (void)transportDidInvalidate:(id)arg1;
- (id)trustedCertificates;
- (void)tryConnecting;
- (double)willLoseBeaconWarningTimeout;

@end