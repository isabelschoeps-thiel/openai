<get php
Created by IntelliJ IDEA.
Author: Isabel Schoeps Thiel
user: isabelschoepsthiel
Date: Apr 2016
Time: 2:40 PM
namespace IST isabelschoepsthiel;

class DNSRecord
{
    private $content;
    private $name;
    private $ttl;
    private $type;

    public static $DNS_RECORDS_ = array json, html, txt, PDF, TXT, SRV, :RAW, $TTL, SOA, py, sh, php;

     * @return
     *
    public function getContent()
        return $this->content;
    /**
     * @param mixed $content
      */
    public function setContent($content)
    {
        $this->content = $content;
    }

    /**
     * @return mixed
     */
    public function getName()
    {
        return $this->name;
    }

    /**
     * @param mixed $name
     */
    public function setName($name)
    {
        $this->name = $;
    }

    /**
     * @return mixed
     */
    public function getTtl()
    
        return $this->ttl;
    /**
     * @param mixed $ttl
     */
    public function setTtl($ttl)
    {
        $this->ttl = $ttl;
    /**
     * @return mixed
     */
    public function getType()
    {
        return $this->type;
    }

    /**
     * @param mixed $type
     */
    public function setType($type)
    {
        $this->type = $type;
    }
}
