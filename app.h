// Crypto Init/shutdown
PyObject *xmlsec_CryptoInit(PyObject *self, PyObject *args);
PyObject *xmlsec_CryptoShutdown(PyObject *self, PyObject *args);
PyObject *xmlsec_CryptoKeysMngrInit(PyObject *self, PyObject *args);

// app
PyObject *xmlsec_CryptoAppInit(PyObject *self, PyObject *args);
PyObject *xmlsec_CryptoAppShutdown(PyObject *self, PyObject *args);
PyObject *xmlsec_CryptoAppDefaultKeysMngrInit(PyObject *self, PyObject *args);
PyObject *xmlsec_CryptoAppDefaultKeysMngrAdoptKey(PyObject *self, PyObject *args);
PyObject *xmlsec_CryptoAppDefaultKeysMngrLoad(PyObject *self, PyObject *args);
PyObject *xmlsec_CryptoAppDefaultKeysMngrSave(PyObject *self, PyObject *args);
PyObject *xmlsec_CryptoAppKeysMngrCertLoad(PyObject *self, PyObject *args);
PyObject *xmlsec_CryptoAppKeyLoad(PyObject *self, PyObject *args);

// symbols
PyObject *xmlsec_TransformAes128CbcId(PyObject *self, PyObject *args);
PyObject *xmlsec_TransformAes192CbcId(PyObject *self, PyObject *args);
PyObject *xmlsec_TransformAes256CbcId(PyObject *self, PyObject *args);
PyObject *xmlsec_TransformKWAes128Id(PyObject *self, PyObject *args);
PyObject *xmlsec_TransformKWAes192Id(PyObject *self, PyObject *args);
PyObject *xmlsec_TransformKWAes256Id(PyObject *self, PyObject *args);
PyObject *xmlsec_TransformDes3CbcId(PyObject *self, PyObject *args);
PyObject *xmlsec_TransformKWDes3Id(PyObject *self, PyObject *args);
PyObject *xmlsec_TransformDsaSha1Id(PyObject *self, PyObject *args);
PyObject *xmlsec_TransformHmacSha1Id(PyObject *self, PyObject *args);
PyObject *xmlsec_TransformHmacRipemd160Id(PyObject *self, PyObject *args);
PyObject *xmlsec_TransformHmacMd5Id(PyObject *self, PyObject *args);
PyObject *xmlsec_TransformRipemd160Id(PyObject *self, PyObject *args);
PyObject *xmlsec_TransformRsaSha1Id(PyObject *self, PyObject *args);
PyObject *xmlsec_TransformRsaPkcs1Id(PyObject *self, PyObject *args);
PyObject *xmlsec_TransformRsaOaepId(PyObject *self, PyObject *args);
PyObject *xmlsec_TransformSha1Id(PyObject *self, PyObject *args);

PyObject *xmlsec_KeyDataDesId(PyObject *self, PyObject *args);
PyObject *xmlsec_KeyDataDsaId(PyObject *self, PyObject *args);
PyObject *xmlsec_KeyDataRsaId(PyObject *self, PyObject *args);
PyObject *xmlsec_KeyDataX509Id(PyObject *self, PyObject *args);
